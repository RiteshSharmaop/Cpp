#include<bits/stdc++.h>
using namespace std;
int wave(int arr[][4],int row,int col){
    int n = 4;
    int startRow = 0, startCol = 0,endCol = n-1,endRow = n-1;
    int total = n+n;
    while(startRow<=endRow){
        for(int i = startCol;i<=endCol;i++){
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;
        
        for(int i = endCol ; i>=startCol;i--){
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;

        endRow--;
        
    }

    
    return 0;

}
int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row = 4;
    int col = 4;
    
    wave(arr,row,col);
    
    return 0;
}