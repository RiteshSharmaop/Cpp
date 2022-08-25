#include<iostream>
using namespace std;
int tripletSum(int arr[],int arrayLength , int sum){
    for(int i = 0 ; i <arrayLength ; i++){
        for(int j = i+1 ; j <arrayLength ; j++){
            for(int k = j+1 ; k <arrayLength ; k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout << i <<" "<< j << " "<< k <<endl;
                    return arr[i]+arr[j] +arr[k];
                }
                
            }
        }
    }
    return -1;

}
int main(){
    int arrayLength;
    cin >> arrayLength ;
    int arr[arrayLength];
    for(int i = 0 ; i < arrayLength ; i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    cout << tripletSum(arr,arrayLength,sum);
    
    return 0;
}