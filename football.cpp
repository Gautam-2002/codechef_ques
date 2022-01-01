#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,t;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n],b[n],c[n];
    for( i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    int max=0;
    for(i=0; i<n; i++){
        c[i]=20*a[i]-10*b[i];
        if(c[i]<0){
        c[i]=0;
        }
        if(c[i]>max)
         max=c[i];
    }
    cout<<max<<endl;
    }
	return 0;
}
