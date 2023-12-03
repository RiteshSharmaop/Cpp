#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
        int arr[300];
        int size;

    Heap(){
        size = 0;
    }

    void insertionIntoHeap(int val){
        size++;
        int ind = size;
        arr[ind] = val;
        while(ind > 1){
            int parInd = ind/2;
            if(arr[parInd] < arr[ind]){
                swap(arr[ind], arr[parInd]);
                ind = parInd;
            }else break;
        }
    }
    void printHeap(){
        for(int i = 1 ; i <= size ; i++){
            cout << arr[i] << " " ;
        }cout << endl;
    }
};
int main() {
    Heap maxHeap;
    maxHeap.insertionIntoHeap(2);
    maxHeap.insertionIntoHeap(6);
    maxHeap.insertionIntoHeap(8);
    maxHeap.insertionIntoHeap(3);
    maxHeap.insertionIntoHeap(7);
    maxHeap.printHeap();
    return 0;
}