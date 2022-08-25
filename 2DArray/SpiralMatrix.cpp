#include<bits/stdc++.h>
using namespace std;
int Spiral(int arr[][4],int row,int col){
    int n = 4;
    int total = n*n;
    int startCol = 0 , startRow = 0 , endRow = n-1 , endCol = n-1;
    while(total--){
        // I
        for(int i = startCol;i<=endCol;i++){
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;
        // II
        for(int i = startRow ; i<=endRow;i++){
            cout<<arr[i][endCol]<<" ";
        }
        endCol--;
        // III
        for(int i = endCol;i>=startCol;i--){
            cout<<arr[endRow][i]<<" ";
        }
        endRow--;
        // IV
        for(int i = endRow;i>=startRow;i--){
            cout<<arr[i][startCol]<<" ";
        }
        startCol++;
    }

    // // V
    // for(int i = startCol;i<=endCol;i++){
    //     cout<<arr[startRow][i]<<" ";
    // }
    // startRow++;
    // // VI
    // for(int i = endCol;i>=startCol;i--){
    //     cout<<arr[endCol][i]<<" ";
    // }

    return 0;

}
int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row = 4;
    int col = 4;
    
    // Spiral(arr,row,col);
    cout<<4/2;
    
    return 0;
}