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

    void bfs(int src , map<int,bool> &visited){
        queue<int> q;
        q.push(src);
        
        visited[src] = 1;

        while(!q.empty()){
            
            int front = q.front();
            q.pop();
            cout<<front<<" ";

            for(auto i : adjList[front]){
                if(!visited[i]) {
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
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
    G.addEdge(0,1,0);
    G.addEdge(1,2,0);
    G.addEdge(1,5,0);
    G.addEdge(2,5,0);
    G.addEdge(3,4,0);
    // G.addEdge(2,4,0);
    // G.addEdge(3,4,0);
    // G.printAdj();
    cout <<endl << endl;

    map<int,bool> visited;

    int n = 5;
    // To handle Disconnected components
    for(int i = 0 ; i < n ; ++i ){
        if(!visited[i]){
            G.bfs(i, visited);

        }
    }

    
    return 0;
}