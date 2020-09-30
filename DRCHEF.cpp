#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long ll;
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
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n,i,days=0,x,felem=0;
        cin >> n >> x;
        ll a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        mergeSort(a,0,n-1);
        for(i=0;i<n;i++){
            if(2*a[i]>=x){
                felem=a[i];
                break;
            }
        }
        if(felem!=0){
            //cout << "felem:" << felem << endl;
            days=ceil(log2(ceil((float)felem/x)))+i+1;
            //cout << "days:" << days << endl;
            i++;
            x=2*felem;
            while(i<n){
                if(a[i]<=x){
                    x=a[i];
                    i++;
                }
                x=2*x;
                days++;
                //cout << "days:" << days  << " " <<a[i] << endl;
            }
            cout << days << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}
