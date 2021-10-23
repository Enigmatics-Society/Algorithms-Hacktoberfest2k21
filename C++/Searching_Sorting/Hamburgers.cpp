//#371C Codeforces
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


bool check(ll mid, ll nb, ll ns, ll nc, ll pb, ll ps, ll  pc, ll ru, ll rb, ll rs, ll rc)
{
    ll b = max(0LL, mid*rb - nb) ;
    ll s = max(0LL, mid*rs - ns) ;
    ll c = max(0LL, mid*rc - nc) ;
    
    if(b*pb + s*ps + c*pc <= ru)
        return true;
    return false;
}

int main(){
    string str;
    ll nb, ns, nc, pb, ps, pc, ru;
    ll rb = 0, rs = 0, rc = 0;
    
    cin >> str;
    cin >> nb >> ns >> nc ;
    cin >> pb >> ps >> pc ;
    cin >> ru;
 
   
    
    for(int i = 0 ; i<str.length() ; i++){
        if(str[i] == 'B')
            rb++;
        if(str[i] == 'S')
            rs++;
        if(str[i] == 'C')
            rc++;
    }
    
    
    ll low = 0 ;
    ll high = 1000000000000 + 1000 ;
    ll ans = 0;
    
    while(low<=high){
        ll mid = (low + high)/2;
        if(check(mid,nb, ns, nc, pb, ps, pc, ru, rb, rs, rc)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    
    cout << ans;
    return 0;
}