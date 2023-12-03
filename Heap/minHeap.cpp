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
            if(arr[parInd] > arr[ind]){
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
    Heap minHeap;
    minHeap.insertionIntoHeap(10);
    minHeap.insertionIntoHeap(7);
    minHeap.insertionIntoHeap(11);
    minHeap.insertionIntoHeap(5);
    minHeap.insertionIntoHeap(4);
    minHeap.insertionIntoHeap(13);
    minHeap.printHeap();
    return 0;
}