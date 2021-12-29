#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >> s;
    while(s--){
        cin>>n;
        int h[n],c=1,i;
        for(i=0 ; i<n ; i++){
            cin>>h[i];
        }
        if(n%2==0){
            cout<<"no"<<endl;
            continue;
        }
        for(i=0 ; i<=(n/2) ; i++){
            if(h[i]!=c){
                c=-1;
                cout<<"no"<<endl;
                break;
            }
            c++;
        }
        if(c==-1){
            continue;
        }
        c-=2;
        for(; i<n ; i++){
            if(h[i]!=c){
                c=-1;
                cout<<"no"<<endl;
                break;
            }
            c--;
        }
        if(c==0){
            cout<<"yes"<<endl;
        }
        continue;
    }
    return 0;
}