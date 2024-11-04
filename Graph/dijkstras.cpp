#include<bits/stdc++.h>
using namespace std;

template<typename T>
// T.C --> O(V+E)

class Graph{
    public:
        map<T,list<pair<T,T>>> adjList;
        
        
    
    void addEdge(T u , T v , T wt, bool direaction){
        // create u -> v
        adjList[u].push_back(make_pair(v,wt));

        // check undirected graph
        if(!direaction){
            // create v -> u
            adjList[v].push_back(make_pair(u,wt));
        }
    }

    void bfs(int src , map<int,bool> &visited){
        queue<int> q;
        q.push(src);
        
        visited[src] = 1;

        while(!q.empty()){
            
            int front = q.front();
            q.pop();
            cout<< front<<" ";

            for(auto i : adjList[front]){
                if(!visited[i]) {
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
    void dijkstras(int src, int n){
        vector<int> dist(n, INT_MAX);
        set<pair<int, int>> st;
        dist[src] = 0;
        st.insert(make_pair(0,src));

        while(!st.empty()){
            auto firstNode = *(st.begin());
            int wt = firstNode.first;
            int node = firstNode.second;
            st.erase(st.begin());

            for(auto neighbour : adjList[node]){
                if(dist[neighbour.first] > wt + neighbour.second){
                    auto record = (st.find(make_pair(dist[neighbour.first],neighbour.first)));
                    // if record is found erase it
                    if(record != st.end()){
                        // remove old record
                        st.erase(record);
                    }
                    // update dist
                    dist[neighbour.first] = wt + neighbour.second;
                    // push new record 
                    st.insert(make_pair(dist[neighbour.first],neighbour.first));
                }
            }
        }
        for(auto i : dist){
            cout << i << " ";
        }cout << endl;

    }
    void printAdj(){
        for(auto i : adjList){
            cout << i.first << "-> ";
            for(auto j : i.second)
                cout << "[ " << j.first << "," << j.second << " ]";
            cout <<  endl;
        }
    }
};
int main() {
    
    Graph<int> G;
    G.addEdge(0,1,5,0);
    G.addEdge(0,2,8,0);
    G.addEdge(1,2,9,0);
    G.addEdge(1,3,2,0);
    G.addEdge(2,3,6,0);
    // G.addEdge(2,4,0);
    // G.addEdge(3,4,0);
    G.printAdj();
    cout <<endl << endl;
    G.dijkstras(0,4);

    
    
    return 0;
}