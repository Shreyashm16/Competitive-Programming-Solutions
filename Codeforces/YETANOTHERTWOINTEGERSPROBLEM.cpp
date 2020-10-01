#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{   int t;
cin>>t;
for(int i=0;i<t;i++){
    int a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"0"<<endl;
    else{
    int n=abs(a-b)/10;
    if(abs(a-b)%10==0)
    cout<<n<<endl;
    else
    cout<<n+1<<endl;
    }
}
    return 0;
}