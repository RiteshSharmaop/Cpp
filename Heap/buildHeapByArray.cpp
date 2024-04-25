#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int> &arr,int size , int ind){
    
    int largest = ind;
    int left=2*ind;
    int right=2*(ind)+1;

    if(left <= size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right <= size && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != ind){
        swap(arr[ind],arr[largest]);
        heapify(arr,size,largest );
    }
}
void buildHeapByArray(vector<int> &arr){
    for(int i = arr.size()/2 ; i >= 1 ; i--){
        heapify(arr,arr.size() , i);
    }
}
int main() {
    vector<int> arr = {-1,1,9,5,6,7,8,3};
    buildHeapByArray(arr);
    for(auto &i: arr) cout << i << " ";
    return 0;
}