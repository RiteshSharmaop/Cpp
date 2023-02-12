int n;
    cin>>n;
    int arr[n];
    vector<pair<int, int>> ans;
    int neg = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum += arr[i];
        if(arr[i] < 0 ) neg++;
        if(i != 0 && arr[i-1]== -1 && arr[i] == -1  ){
            ans.push_back({i-1,i});
        }
    }
    if (neg == 0) {
        cout<<sum - (4)<<endl;
        return;
    }
    if (neg == 1 && ans.size() == 0){
        cout<<sum<<endl;
        return;
    }
    if( ans.size() > 0 ){
        arr[ans[0].first] = 1;
        arr[ans[0].second] = 1;
        int summ = 0;
        for(int i = 0 ; i < n ; i++){
            summ += arr[i];
        }
        cout<<summ<<endl;
    }else {
        cout<<sum<<endl;
    }
    // if(neg >= 1){

    // }