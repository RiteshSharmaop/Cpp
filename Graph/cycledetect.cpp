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
    bool isCyclicDFS(int src , int parent , map<int,bool> & visited){
        visited[src] = 1;

        for(auto neighbour : adjList[src] ){
            if(!visited[neighbour]){
                bool cycleDet = isCyclicDFS(neighbour , src , visited);
                if(cycleDet) return true;
            }else if(visited[neighbour] && neighbour != parent) return true;
        }
        return false;
    }
};
int main() {
    
    Graph<int> G;
    G.addEdge(0,2,0);
    G.addEdge(1,3,0);
    G.addEdge(2,3,0);
    G.addEdge(2,4,0);
    G.addEdge(4,3,0);

    map<int,bool> visited;
    map<int,bool> visited2;
    int n = 5;
    cout <<" GRAPH 1 "<< endl;
    // To handle Disconnected components
    for(int i = 0 ; i < n ; ++i ){
        if(!visited2[i]){
            G.bfs(i, visited2);
        }
    }cout <<endl;
    // string ans = (G.isCyclicDFS(0,-1,visited)) ? "Cyclic is Present"  :  "Cyclic is Not Present" ;
    cout << "Cycle or Not : " << (G.isCyclicDFS(0,-1,visited)) << endl;
    
    
    // cout << endl << endl << "Graph 2" <<endl;
    // Graph<int> G2;
    // G2.addEdge(0,2,0);
    // G2.addEdge(1,3,0);
    // G2.addEdge(2,3,0);
    // G2.addEdge(4,3,0);
    // map<int,bool> visited2;
    // // int n = 5;
    // // To handle Disconnected components
    // for(int i = 0 ; i < n ; ++i ){
    //     if(!visited2[i]){
    //         G.bfs(i, visited2);
    //     }
    // }cout <<endl;
    // string ans2 = (G2.isCyclicDFS(0,-1,visited2)) ? "Cyclic is Present"  :  "Cyclic is Not Present" ;
    // cout << "Cycle or Not : " << ans2 << endl;

    
    return 0;
}