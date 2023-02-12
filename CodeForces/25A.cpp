map<string , int> m;
    int n;
    cin>>n;
    vector<int> o;
    vector<int> e;    
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        if(a&1){
            o.emplace_back(i+1);
        }else e.emplace_back(i+1);
    }
    if(o.size() == 1) cout<<o[0]<<endl;
    else cout<<e[0]<<endl;