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
    void delHeap(){

        if(size == 0){
            cout << "Heap is Empty!!!" <<endl;
            return;
        }
        // swap arr[1] , arr[n]
        // del last element
        // set position of arr[1] at correct postion

        swap(arr[1],arr[size]);

        size--;
    
        int ind = 1;
        // int ans = -1;
        while(ind <= size) {
        // cout << "Del Heap" <<endl;
            int left = 2*ind;
            int right = 2*ind+1;
            if(left <= size && arr[left] > arr[ind]) {
                ind = left;
            }
            if(right <= size && arr[right] > arr[ind]) {
                ind = right;
            }
            if(left > size || right > size) 
                return;
            
            swap(arr[ind] , arr[ind/2]);
            // printHeap();
        }
        // swap(arr[ind],arr[ind/2]);
    }
};
int main() {
    Heap maxHeap;
    maxHeap.insertionIntoHeap(1);
    maxHeap.insertionIntoHeap(5);
    maxHeap.insertionIntoHeap(6);
    maxHeap.insertionIntoHeap(8);
    maxHeap.insertionIntoHeap(9);
    maxHeap.insertionIntoHeap(7);
    maxHeap.insertionIntoHeap(3);
    maxHeap.printHeap();
    maxHeap.delHeap();
    maxHeap.printHeap();
    return 0;
}