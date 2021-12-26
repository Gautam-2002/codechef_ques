#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,c,a,s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>c;
        s=0;
        for(int j=0;j<n;j++){
            cin>>a;
            s+=a;
        }
        if(s<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}