#include<iostream>
using namespace std;
int Maxii(int size , int arr[] , int maxi){
    if(size <= 0 ){
        return maxi;
    }
    maxi = max(arr[size] , maxi);
    Maxii(size - 1 , arr , maxi);
}

int main(){
    int arr[] = {54,9,65,35,6,5};
    int maxi = -1;
    int size = 6-1;
    cout<<Maxii(size,arr,maxi)<<endl;
     return 0;
}