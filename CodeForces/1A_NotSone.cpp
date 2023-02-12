int a,b,c;
    cin>>a>>b>>c;
    if(a%c == 0 && b%c ==0){

    }else if(a %c == 0 && b % c != 0 || a% c != 0 && b % c == 0) {
        if(a%c ==0){
            ll aa , bb;
            aa = a / c;
            bb = (b / c)+1;
            cout<<aa*bb<<endl;
        }else {
            ll aa , bb;
            aa = a / c + 1;
            bb = (b / c);
            cout<<aa*bb<<endl;
        }
    }else {
        
    }