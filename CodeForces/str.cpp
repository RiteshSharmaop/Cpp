string s1 , s2;
    cin>>s1>>s2;
    ll count = 0;
    for(int i = 0 ; i < s1.length() ; i++){
        if(s1.substr(i , s2.length()) == s2 ){
            count++;
        }
    }
    cout<<count<<endl;