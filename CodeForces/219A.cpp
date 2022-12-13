
int k;
    cin>>k;
    string s;
    cin>>s;
    map<char , int>m;
    for(int i = 0 ; i < s.length() ; i++){
        m[s[i]]++;
    }
    string ans = "";
    // int tot = m['a']<<endl;
    for(auto i : m ){
        if(i.second != k){
            cout<<-1<<endl;
            return 0;
        }
        ans.push_back(i.first);
    }
    string fl ="";
    while(k--){
        fl = fl + ans;
    }
    cout<<fl<<endl;
