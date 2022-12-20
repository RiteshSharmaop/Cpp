   int n,k;
    cet<int> st;
    for(int i = 0 ; i < n ; i++){
        cin>>p[i].second;
        st.insert(p[i].second);
    }
    for(int i = 0 ; i < n ; i++){
     in>>n>>k;
    vector<pair<int , int>> p(n);
    s   cin>>p[i].first;
    }
    sort(p.begin() , p.end());
    if(st.size() >= k){
        map<int , int> m;
        int time = 0;
        for(auto i : p){
            // cout<<i.second<<" "<<i.first<<endl; 
            if(m[i.second] == 0){
                time += i.first; 
                // cout<<"time "<<time<<endl;
                if(time == k){
                    cout<<time<<endl;
                } 
            }
            m[i.second]++;
        }
    }else cout<<-1<<endl;
