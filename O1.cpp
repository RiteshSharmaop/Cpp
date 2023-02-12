/*

    CodeForces 1117B
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    if(k == m){
        cout<<arr[n-1]*k<<endl;
    }else{
        if(k == 1){
            m /= 2;
            cout<<(arr[n-2]*m)+(arr[n-1]*m);
            return;
        }
        if(m%(k+1)== 0){
            ll a = k+1;
            m /= a;
            cout<<(arr[n-2]*m)+((arr[n-1]*k)*m)<<endl;
        }else{
            ll a = k + 1;
            ll b = m / a;
            ll c = a * b;
            ll d = m - c;
            cout<<(d*arr[n-1]) + (arr[n-2] * b) + ((arr[n-1]*k)*b)<<endl; 
        }
    }
    


    CodeForces EDu : 118 A
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // cout<<"b "<<b <<" d "<<d<<endl;

    ll q = a*(pow(10,b));
    ll w = c*(pow(10,d));
    cout<<q<<" "<<w<<endl;
    
    if(a*(pow(10,b)) == c*(pow(10,d))){
         cout<<'='<<endl;
    }
    else if(a*(pow(10,b))  > c*(pow(10,d))){
         cout<<'>'<<endl;
    }
    else {
        cout<<'<'<<endl;
    } 

    
    // if( a == c )cout<<'='<<endl;
    // else if( a > c ) cout<<'>'<<endl;
    // else cout<<'<'<<endl;


    */