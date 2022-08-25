#include<iostream>
using namespace std;
bool isPossibleSol(int mid,int cook,int rank[]){
    for(int i = 0 ; i< cook; i++){
        int time  = mid;
        while(time > 0){
            if(rank[i])
        }
    }
}
int ParataRoti(int rank[], int parata , int cook,int n){
    int s = 0;
    int e = rank[0]*(parata*(parata+1)/2);
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossibleSol(mid,cook,rank)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    int parata = 10;
    int cook = 4;
    int rank[] = {1,2,3,4};
    int n = sizeof(rank)/sizeof(rank[0]);
    return 0;
}