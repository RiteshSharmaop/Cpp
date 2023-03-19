int n , l , b , L , B ;
    cin>>l >> b >> n;
    ll ans = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>L>>B;
        if(l <= L && b <= B ){
            ans += max((L / l) * (B / b) , (L / b) * (B / l) );
        }
    }
    cout<<ans<<endl;