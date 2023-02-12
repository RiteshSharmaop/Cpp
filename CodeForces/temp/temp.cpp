/*
int minDig(int a){
    int mini = INT_MAX;
    while(a!=0){
        mini = min(mini , a%10);
        a /= 10;
    }
    return mini;
}

int maxDig(int a){
    int mini = INT_MIN;
    while(a!=0){
        mini = max(mini , a%10);
        a /= 10;
    }
    return mini;
}

void solve(){
    ll a,k;
    cin>>a>>k;
    k-=1;
    
    int minD = minDig(a);
    int maxD = maxDig(a);
    a = a + (minD * maxD);
    cout<<a*k<<endl;
}

bool solve(){
    int n;
    cin>>n;
    vi v(n);
    int po = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        if(v[i] >= v[i-1] )po++;
    }
    if(po+1 == n || n == 1) return true;

    int s = 0;
    while(v[s] >= v[s+1]){
        s++;
    }
    int e = n-1;
    while(v[e] >= v[e-1]){
        e--;
    }
    if(s==e)return true;
    else return false;
}


ull n;
    cin>>n;
    ull arr[n];
    ull mini = llmax;
    ull sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        mini = min(mini , arr[i]);
        sum += arr[i];
    }
    cout<<( sum  * 2022) * mini   <<endl;
bool solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int , int>> arr(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i].second;
        sum += arr[i].second;
    }
    int fsum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i].first;
        fsum += arr[i].first;
    }
    while(k != 0 || sum != 0 ){
        sortarr(arr);
        int mini = INT_MAX;
        cout<<"k "<<k<<endl;
        for(int i = 0 ; i < n ; i++){
            if(k >= arr[i].second ) {
                sum -= arr[i].second;
                arr[i].second = 0;
                continue;
            }else {
                arr[i].second -= k;
                sum -= arr[i].second ;
                mini = min(mini ,arr[i].first);
            }
            if(arr[i].first <= 0){

            }
        }
        k -= mini;
        if(sum == 0){
            return true;
        }
        if(k <= 0){
            // cout<<"ow"<<'\n';
            return false;
        }
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i].second<<" "; 
        }cout<<endl;
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i].first<<" "; 
        }cout<<endl;
    }
    return true;
    
}
*/



/*

int n;
    cin>>n;
    string s;
    cin>>s;
    int mini = INT_MAX;
    if(n==2){
        cout<<1<<endl;
        return;
    }
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            int countZero = 0;
            for(int j = i+1 ; j < n ; j++){
                if(s[j] == '0'){
                    countZero++;
                }
                else {
                    if((countZero & 1) == 0){
                        int ans = 1;
                        cout<<1<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<2<<endl;

    puggaru
*/