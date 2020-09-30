#include <iostream>
using namespace std;
typedef long long ll;
ll sum(ll n){
    ll i=0,k=n;
    while(k>0){
        i+=k%10;
        k/=10;
    }
    return i;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,i,b,a,pa=0,pb=0;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> a;
            cin >> b;
            a=sum(a);
            b=sum(b);
            if(a>b)
                pa++;
            else if(a<b)
                pb++;
            else{
                pa++;
                pb++;
            }
        }
        if(pa>pb)
            cout << 0 << " " << pa << endl;
        else if(pa<pb)
            cout << 1 << " " << pb << endl;
        else
            cout << 2 << " "<< pa << endl;
    }
    return 0;
}
