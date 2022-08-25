#include<iostream>
using namespace std;
bool LinearSearch(int arr[][3],int n , int target){
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< n ; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3] = {5,1,3,4,6,8,9,10,11};
    int n = 3;
    int target = 13;
    
    if(LinearSearch(arr,n,target)){
        cout<<"Present" << endl;
    }else
        cout<<"Not -Present" << endl;
    return 0;
}