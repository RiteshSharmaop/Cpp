long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve(){
    ll n ;
    cin>>n;
    ll s = 1;
    ll e = n-1;
    ll lm = N;
    pair<int , int > ans;
    while(s <= e){
        ll LC = lcm(s, e);
        if(lm > LC){
            ans.first = s;
            ans.second = e;
            lm = LC;
        }
        s++;
        e--;
    }
    cout<<ans.first << " "<< ans.second<<endl;
}