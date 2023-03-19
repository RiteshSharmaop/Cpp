isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ; i++){
        if(isPrime[i]){
            for(int j = i * 2 ; j < N ; j += i){
                isPrime[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 1 ; i < n ; ++i){
        cout << i << " " << isPrime[i] << endl;
    }