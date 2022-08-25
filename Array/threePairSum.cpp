#include<bits/stdc++.h>
using namespace std;
bool find3Numbers(int arr[], int n, int target)
{
    int l, r;
    /* Sort the elements */
    sort(arr, arr + n);
    /* Now fix the first element one by one and find the
       other two elements */
    for (int i = 0; i < n - 2; i++) {
  
        
        l = i + 1; // index of the first element in the
        // remaining elements
        r = n - 1; // index of the last element
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == target) {
                printf("Triplet is %d, %d, %d", arr[i], arr[l],arr[r]);
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < target)
                l++;
            else // arr[i] + arr[l] + arr[r] > target
                r--;
        }
    }
    // If we reach here, then no triplet was found
    return false;
}
void threeP(int arr[] , int n,int newtarget){
    sort(arr,arr+n);
    for(int i=0; i < n ; i++){
        int first = i+1;
        int target = newtarget - i;
        int j = n-1;
        while(i+1<j){
            if(arr[i+1]+arr[j]==target){
                if(arr[i]+arr[first]+arr[j]==newtarget)
                    cout<< "{"<<first <<" , " << i << " , "<<j;
                i++;
            }
            if(arr[i+1]+arr[j]>target){
                j--;
            }
            if(arr[i+1]+arr[j]< target){
                i++;
            }
        }
    }
}
void threePairSum(int arr[] , int n , int newtarget){
    sort(arr , arr + 6);
    for(int i = 0 ; i < n ; i++){
        int first = i+1;
        int j = n-1;
        while(i<j){
                if(arr[first]+arr[j]+arr[i]==newtarget){
                    cout<<"{"<<arr[i]<<" , "<< arr[first] << " , "<<arr[j]<<"}";
                    first++;
                }
                if(arr[first]+arr[j]+arr[i]>newtarget){
                    j--;
                }
                if(arr[first]+arr[j]+arr[i]<newtarget){
                    first++;
                }
            }
        }
}
int main(){
    int arr[] = {1,3,11,6,13,4};
    int newtarget = 23;
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = 6;
    // threePairSum(arr,n,newtarget);
    // find3Numbers(arr,n,target);
    threeP(arr,n,newtarget);

    return 0;
}