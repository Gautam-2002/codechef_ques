#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        cin>>n;
        int a[n],b[n],s=0;
        for(int j=0 ; j<n ; j++){
            cin>>a[j];
        }
        for(int j=0 ; j<n ; j++){
            cin>>b[j];
        }
        if(a[0]>=b[0]){
                s++;
            }
        for(int j=1; j<n ; j++){
            if(a[j]-a[j-1]>=b[j]){
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}