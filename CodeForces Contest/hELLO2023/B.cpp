ll n ;
    cin>>n;
    if(n==3)cout<<"NO"<<endl;
    else if((n&1)){
        cout<<"YES"<<endl;
        int m = n - 2;
        int a = -(m/2);
        int b = ((m+1)/2);
        for(int i = 0 ; i < n ; i++){
            if(i&1) cout<<b<<" ";
            else cout<<a<<" ";
        }
    }
    else {
        cout<<"YES"<<endl;
        ll a = -2;
        ll b = 2;
        for(int i = 0 ; i < n ; i++){
            if(i&1) cout<<b<<" ";
            else cout<<a<<" ";
        }
        cout<<endl;
    }