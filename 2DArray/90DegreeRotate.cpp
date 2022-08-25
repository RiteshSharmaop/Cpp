#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][3],int row ,int col){
    // Transpose
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if (i>=j)
                swap(arr[i][j],arr[j][i]);
        }
    }  
}

void rotate(int arr[][3],int row , int col){
    for(int i = 0; i<row ; i++){
        int j = 0 , k = col-1;
        while(j<k){
            swap(arr[i][j],arr[i][k]);
            j++;
            k--;
        }


        // OR
        // for(int j = 0,k = col-1 ; j<k; j++,k--){
        //     swap(arr[i][j],arr[i][k]);
        // }
    }
}
    
void withoutSwapRotate(int arr[3][3] , int row , int col){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    
    cout<<"Rotate Without Swap: "<<endl;
    withoutSwapRotate(arr,row,col);

    cout<<"Transpose: "<<endl;
    transpose(arr,row,col);
    for(int i = 0 ; i < row ; i++){
        int j = 0;
        while(j<col){
            cout<<arr[i][j]<<" ";
            j++;
        }
        cout<<endl;
    }


    cout<<"Reverse Row: "<<endl;
    rotate(arr,row,col);
    for(int i = 0 ; i < row ; i++){
        int j = 0;
        while(j<col){
            cout<<arr[i][j]<<" ";
            j++;
        }
        cout<<endl;
    }
    
    return 0;
}