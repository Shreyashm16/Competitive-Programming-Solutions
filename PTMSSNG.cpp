#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    n = 4*n-1; 
	    int x[n];
	    int y[n];
	    int temp1,temp2;
	    for(int i=0;i<n;i++){
	        cin >> x[i] >> y[i];
	    }
	    sort(x,x+n);
	    sort(y,y+n);
	   // for(int i=0;i<n;i++){
	   //     cout << x[i] << " " << y[i] << endl;
	   // }
	    int ax,ay;
	    for(int i=0;i<n;i+=2){
	        if (x[i]!=x[i+1])
	        {
	            ax = x[i];
	            break;
	        }
	    }
	    for(int i=0;i<n;i+=2){
	        if (y[i]!=y[i+1])
	        {
	            ay = y[i];
	            break;
	        }
	    }
	    cout << ax << " " << ay << endl;
	}
	return 0;
}