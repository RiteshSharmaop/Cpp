#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{
    public:
        // map<T,list<T>> adjList;
        map<T,list<pair<T,T>>> adjList;
        
    
    void addEdge(T u , T v , bool direaction){
        // create u -> v
        adjList[u].push_back(v);

        // check undirected graph
        if(!direaction){
            // create v -> u
            adjList[v].push_back(u);
        }
    }

    void addWeightedEdge(T u , T v, T weight , bool direaction){
        // create u -> v
        adjList[u].push_back(make_pair(v,weight));

        // check undirected graph
        if(!direaction){
            // create v -> u
            adjList[v].push_back(make_pair(u,weight));
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
    void printWeightedAdj(){
        for(auto i : adjList){
            cout << i.first << "-> ";
            for(auto j : i.second)
                cout << "(" << j.first << "," << j.second << ") , "; 
            cout <<  endl;
        }
    }
};
int main() {
    
    // Graph<int> G;
    // G.addEdge(0,1,0);
    // G.addEdge(1,2,0);
    // G.addEdge(1,3,0);
    // G.addEdge(2,3,0);
    // G.addEdge(2,4,0);
    // G.addEdge(3,4,0);
    // G.printAdj();
    cout<<endl; 

    Graph<int> Gr;
    Gr.addWeightedEdge(0,1,3,0);
    Gr.addWeightedEdge(1,2,9,0);
    Gr.addWeightedEdge(1,3,4,0);
    Gr.addWeightedEdge(2,3,5,0);
    Gr.addWeightedEdge(2,4,6,0);
    Gr.addWeightedEdge(3,4,1,0);
    Gr.printWeightedAdj();
    return 0;
}