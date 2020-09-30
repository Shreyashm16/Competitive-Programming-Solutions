#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,i,b,a,tot=0;
        cin >> n;
        cin >> b;
        for(i=1;i<n;i++){
            cin >> a;
            tot+=abs(a-b)-1;
            b=a;
        }
        cout << tot << endl;
    }
    return 0;
}
