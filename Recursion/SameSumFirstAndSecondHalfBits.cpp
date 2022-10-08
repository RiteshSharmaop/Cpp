#include<bits/stdc++.h>
using namespace std;
void SameSumOfFirstAndSecondHalf(int fs,int ss , int n,char* output,int s,int e){
    if(s>e){
        if(fs == ss) 
            cout<<output<<endl;
        return;
    }

    // 0,0
    output[s] = '0';
    output[e] = '0';
    SameSumOfFirstAndSecondHalf(fs,ss,n,output,s+1,e-1);
    // 1,0
    output[s] = '1';
    output[e] = '0';
    SameSumOfFirstAndSecondHalf(fs+1,ss,n,output,s+1,e-1);
    // 0,1
    output[s] = '0';
    output[e] = '1';
    SameSumOfFirstAndSecondHalf(fs,ss+1,n,output,s+1,e-1);
    // 1,1
    output[s] = '1';
    output[e] = '1';
    SameSumOfFirstAndSecondHalf(fs+1,ss+1,n,output,s+1,e-1);
     
}

void findSequences(int leftSum, int rightSum, char* output, int i, int j) {

    //base case
    if( i > j ) {
        if(leftSum == rightSum)
            cout << output << endl;
        return;
    }

    //put 0,0
    output[i] = '0';
    output[j] = '0';
    findSequences(leftSum, rightSum, output, i+1, j-1);

    //put 0,1
    output[i] = '0';
    output[j] = '1';
    findSequences(leftSum, rightSum+1, output, i+1, j-1);

    //put 1,0
    output[i] = '1';
    output[j] = '0';
    findSequences(leftSum+1, rightSum, output, i+1, j-1);

    //put 1,1
    output[i] = '1';
    output[j] = '1';
    findSequences(leftSum+1, rightSum+1, output, i+1, j-1);


}
// int f(int i, int ls , int rs , int* arr[] , int j){
//     if(i == j ){
//         if(ls == rs )
//     }
// }

int main() {


    cout << "Enter the value of n " << endl;
    int n;
    cin >> n;
    // Pointer 
    char* arr = new char[2*n];

    findSequences(0, 0, arr, 0, 2*n-1);
    



    return 0;



    // int n; cin>>n;
//     char* output= new char[n*2];
//     SameSumOfFirstAndSecondHalf(0,0,n,output,0,2*n-1);
//     return 0;
}
