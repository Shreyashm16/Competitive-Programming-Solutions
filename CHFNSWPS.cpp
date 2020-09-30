#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
typedef long long ll;
void swap(ll *a,ll *b){
    ll t=*a;
    *a=*b;
    *b=t;
}
ll count(ll arr[], ll x, ll n){
  ll *low = lower_bound(arr, arr+n, x);
  if(low == (arr + n) || *low != x)
     return 0;
  ll *high = upper_bound(low, arr+n, x);
  return high - low;
}
void merge(ll arr[],ll l,ll m,ll r){
    ll i,j,k,n1=m-l+1,n2=r-m,L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(ll arr[],ll l,ll r){
    if (l < r) {
        ll m = l + (r - l) / 2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n,i,cost=0,x,y,k1=0,flag=0,l,m;
        cin >> n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        mergeSort(a,0,n-1);
        mergeSort(b,0,n-1);
        ll z=min(a[0],b[0]);
        vector<ll> vec;
        x=count(a,a[0],n);
        y=count(b,a[0],n);
        if((x%2==0 && y%2==1)||(x%2==1 && y%2==0)){
            cout << -1 << endl;
            continue;
        }
        else if(x!=y){
            ll j;
            l=abs(x-y)/2;
            for(j=0;j<l;j++){
                vec.push_back(a[0]);
                k1++;
            }
        }
        for(i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                x=count(a,a[i],n);
                y=count(b,a[i],n);
                if((x%2==0 && y%2==1)||(x%2==1 && y%2==0)){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                else if(x!=y){
                    l=abs(x-y)/2;
                    ll j;
                    for(j=0;j<l;j++){
                        vec.push_back(a[i]);
                        k1++;
                    }
                }
            }
        }
        if(flag==0){
            x=count(a,b[0],n);
            y=count(b,b[0],n);
            if((x%2==0 && y%2==1)||(x%2==1 && y%2==0)){
                cout << -1 << endl;
                continue;
            }
            else if(x!=y && x==0){
                ll j;
                l=abs(x-y)/2;
                for(i=0;i<l;i++){
                    vec.push_back(b[0]);
                    k1++;
                }
            }
            for(i=1;i<n;i++){
                if(b[i]!=b[i-1]){
                    x=count(a,b[i],n);
                    y=count(b,b[i],n);
                    if((x%2==0 && y%2==1)||(x%2==1 && y%2==0)){
                        cout << -1 << endl;
                        flag=1;
                        break;
                    }
                    else if(x!=y && x==0){
                        l=abs(x-y)/2;
                        ll j;
                        for(j=0;j<l;j++){
                            vec.push_back(b[i]);
                            k1++;
                        }
                    }
                }
            }
            if(flag==0){
                //sort(vec.begin(),vec.end());
                /*for(i=0;i<(k1);i++){
                    cout << vec[i] << " ";
                }
                cout << endl;*/
                sort(vec.begin(),vec.end());
                /*for(i=0;i<(k1);i++){
                    cout << vec[i] << " ";
                }
                cout << endl;*/
                if(k1==0)
                    cout << 0 << endl;
                else{
                    /*for(i=0;i<(k1/2);i++)
                        cost+=min(2*z,vec[i]);*/
                    for(i=0;i<(k1/2);i++){
                        cost+=min(2*z,vec[i]);
                    }
                    cout << cost << endl;
                }
                //cout << endl;
            }
        }
    }
    return 0;
}


