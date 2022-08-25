#include<bits/stdc++.h>

using namespace std;
void printArray(char arr[],int size){
    for(int i = 0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void reverseCharacterArray(char arr[],int size){
    int s = 0;
    int e = size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}
int main(){
    
    char arr[7] = "Ritesh";
    int size= strlen(arr);
    reverseCharacterArray(arr,size);
    // printArray( arr, size);
    cout<<arr<<endl;

    return 0;
}