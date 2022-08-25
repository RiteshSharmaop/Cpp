#include<iostream>
using namespace std;
void collsum(int arr[][4],int row , int col ){
    for(int i = 0 ; i< col /* i<column*/ ; i++){
        int sum = 0;
        for(int j = 0 ; j< row ; j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<" ";
    }
}

void rowsum(int arr[][4],int row , int col ){
    for(int i = 0 ; i< row ; i++){
        int sum = 0;
        for(int j = 0 ; j< col ; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
}

void colSum(int arr[][4],int row , int col , int brr[]){

    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j< col ; j++){
            if(j==0){
                brr[0] = brr[0] + arr[i][j];
            }
            if(j==1){
                brr[1] = brr[1] + arr[i][j];
            }
            if(j==2){
                brr[2] = brr[2] + arr[i][j];
            }
            if(j==3){
                brr[3] = brr[3] + arr[i][j];
            }
        }
    }
    cout<<endl; 
}
void coll(int arr[][4],int row ,int col){
    for(int i = 0 ;i<col; i++){
        int sum = 0;
        for(int j = 0 ; j< row ; j++){
            sum = sum+arr[j][i];
        }
        cout<<sum;
    }
}
int MaxColSum(int brr[]){
    int max = INT32_MIN;
    for(int i = 0 ; i< 4 ; i++){
        if(brr[i]>max){
            max =brr[i];
        }
    }
    return max;
}
int main(){
    int arr[3][4] = {3,5,11,2,7,9,8,0,5,0,1,3};
    int row = 3;
    int col = 4;  
    int brr[col] = {0};

    
    colSum(arr,row ,col,brr);
    cout<<"Column Sum is: ";
    for(int i = 0 ; i< 4 ; i++){
        cout << brr[i] << " ";
    }

    cout<<"Column Sum is: " <<endl;;
    collsum(arr,row ,col);
    cout<<endl;
    cout<<"Row Sum is: " <<endl;;
    rowsum(arr,row ,col);
   
    cout<<endl;
    cout<<"Maximum Value is : ";
    cout<<MaxColSum(brr)<<endl;;

    coll(arr,row,col);

  
    return 0;
}