#include<bits/stdc++.h>

using namespace std;
int getLength(char arr[]){
    int length = 0;
    int index = 0;
    while(arr[index] != '\0'){
        length++;
        index++;
    }
    return length;
}

int main(){
    
    // char arr[5] = "Rite";
    char arr[5] = "Rite";
    char brr[11] = "Riteknakns";
        cout<< "MY Arr is: ";
    for(int i = 0 ; i<5;i++){
        cout<< arr[i];
    }
    cout<<"End"<<endl;
    
    // cin>>title;
    // cout<<"ARR"<<arr[5]<<endl;  

    // cout<<arr;
    
    cout<<getLength(arr)<<endl;
    cout<<"Pre-Defined Function [Size of Arr]: "<<strlen(arr)<<endl;;

    cout<<"Array 1 is Equal To Array 2 or not: "<<strcmp(arr,brr)<<endl;;

    cout<<strcpy(arr,brr)<<endl;;
    cout<<arr<<endl;
    cout<<"Now The Size of Arr is: "<<strlen(arr)<<endl;



    return 0;
}