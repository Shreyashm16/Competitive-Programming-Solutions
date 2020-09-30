#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        ll x[4*n-1],y[4*n-1],xf=0,yf=0,i;
        for(i=0;i<(4*n-1);i++){
            cin >> x[i];
            cin >> y[i];
        }
        for(i=0;i<(4*n-1);i++)
            xf=xf^x[i];
        for(i=0;i<(4*n-1);i++)
            yf=yf^y[i];
        cout << xf << " "<< yf << endl;
    }
    return 0;
}
