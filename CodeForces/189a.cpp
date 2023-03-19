int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0 ; i < 3 ; i++) {
        int ab;
        cin >> ab;
        arr.push_back(ab);
    }
    sortarr(arr);
    int count = 1;
    for(int i = 0 ; i < 3 ; i++){
        if(n - arr[i] > 0 ){
            n -= arr[i];
            count++;
        }else break;
    }
    print(count);
    