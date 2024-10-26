#include<bits/stdc++.h>
using namespace std;

template<typename T>
// T.C --> O(V+E)

class Graph{
    public:
        map<T,list<T>> adjList;
        
        
    
    void addEdge(T u , T v , bool direaction){
        // create u -> v
        adjList[u].push_back(v);

        // check undirected graph
        if(!direaction){
            // create v -> u
            adjList[v].push_back(u);
        }
    }

    int findPath(map<int , int> &parent , int dest , int src){
        cout << "Parent : " <<endl;
        for(auto i : parent){
            cout << i.first << " " << i.second <<endl;
        }cout<<endl;


        vector<int> ans;
        int cnt = 0;
        ans.emplace_back(dest);
        while(parent[dest] != src){
            dest = parent[dest];
            ans.emplace_back(dest);
            cnt++;
        }


        ans.emplace_back(src);
        
        cnt++;
        // ans.emplace
        for(auto i : ans) {
            cout << i << " ";
        }cout<<endl;
        return cnt;
    }
    int ShortestPasthInIndirected(int src , map<int,bool> &visited , int dest){
        queue<int> q;
        if(src == dest) {
            return 0;
        }
        q.push(src);
        map<int ,int> parent;
        
        visited[src] = 1;
        parent[src] = -1;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto i : adjList[front]){
                if(!visited[i]) {
                    q.push(i);
                    visited[i]=1;
                    parent[i] = front;
                }
            }
        }
        int cnt = findPath(parent,dest , src);
        return cnt;
    }
    void printAdj(){
        for(auto i : adjList){
            cout << i.first << "-> ";
            for(auto j : i.second)
                cout << j << " ";
            cout <<  endl;
        }
    }
};
int main() {
    
    Graph<int> G;
    G.addEdge(1,2,0);
    G.addEdge(1,3,0);
    G.addEdge(1,4,0);
    G.addEdge(2,5,0);
    G.addEdge(3,8,0);
    G.addEdge(4,6,0);
    G.addEdge(6,7,0);
    G.addEdge(7,8,0);
    G.addEdge(5,8,0);
    // G.addEdge(3,4,0);
    G.printAdj();
    cout <<endl << endl;

    map<int,bool> visited;

    int n = 8;
    // To handle Disconnected components
    for(int i = 1 ; i <= n ; ++i ){
        if(!visited[i]){
            cout << "Ans : " << G.ShortestPasthInIndirected(i, visited,7) << endl;
            return 0;
        }
    }

    
    return 0;
}