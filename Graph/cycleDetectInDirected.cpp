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
    bool dfsCycle(int src , map<int, bool> &visited){
        if(visited[src] == false){
            visited[src] = 1;
            for(auto i : adjList[src]){
                bool cycle = dfsCycle(i,visited);
                if(cycle) return true;
                visited[i] = false;
            }
        }else {
            return true;
        }
        return false;
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
    G.addEdge(1,2,1);
    G.addEdge(2,3,1);
    G.addEdge(2,4,1);
    G.addEdge(3,7,1);
    G.addEdge(3,8,1);
    G.addEdge(8,7,1);
    G.addEdge(4,5,1);
    G.addEdge(5,6,1);
    G.addEdge(6,4,1);
    
    G.printAdj();
    cout <<endl << endl;

    map<int,bool> visited;

    int n = 8;
    // To handle Disconnected components
    // for(int i = 1 ; i <= n ; ++i ){
    //     if(!visited[i]){
    //         // G.dfs(i, visited);/
    //         cout << "Cycle : " << G.dfsCycle(i, visited);
    //         return;
    //     }
    // }
    cout << "Cycle : " << G.dfsCycle(1, visited);
    
    return 0;
}