int arr[],int k,int n){
    // Finding Size of Window
    int count = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]<=k){
            count++;
        }
    }
    // making Windows
    int bad = 0;
    int brr[10];
    int mini = INT32_MAX;
    for(int i =0;i<n ; i++){
        bad = 0;
        for(int j = i ; j<count;j++){
            if(arr[j]<=k){
                bad++;
            }
        }
        for(int i = 0 ; i<10 ; i++){
            if(mini>bad){
                mini  = bad;
            }
        }
    }
        cout <<bad<<endl;

    
    
}