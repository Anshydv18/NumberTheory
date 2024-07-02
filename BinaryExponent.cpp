#include<bits/stdc++.h>
using namespace std;

int binpow(int a,int n){
    if(n==0) return 1;
     int ans = binpow(a,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*a;
    }
}
int main(){
    //binary exponentiation
    long long a,b; cin>>a>>b;
    long long  res=1;
    long long m = 1e9+7;
    a=a%m;
    while(b){
        if(b&1)
            res=res*a %m;
        a=a*a%m;
        b>>=1;
    }
    cout<<res<<endl;

    cout<<binpow(2,5)<<endl;
    
}