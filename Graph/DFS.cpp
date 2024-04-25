#include<bits/stdc++.h>
using namespace std;

template<typename T>

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
    void  dfs(int src , map<int ,bool > &visited){
        visited[src]=true;
        cout<<src<<" ";
        for(auto neighbour : adjList[src]){
            if(!visited[neighbour]){
                dfs(neighbour , visited);
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
    G.addEdge(0,2,0);
    G.addEdge(2,4,0);
    G.addEdge(2,3,0);
    G.addEdge(3,4,0);
    G.addEdge(3,1,0);
    // G.addEdge(2,4,0);
    // G.addEdge(3,4,0);
    G.printAdj();
    cout <<endl << endl;

    map<int,bool> visited;

    int n = 5;
    // To handle Disconnected components
    for(int i = 0 ; i < n ; ++i ){
        if(!visited[i]){
            G.dfs(i, visited);

        }
    }
    
    return 0;
}