#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	bool arr[n+1]={0};
	while(k--){
	    string typ;
	    cin>>typ;
	    if(typ=="CLICK"){
	        int x;
	        cin>>x;
	        
	        arr[x]=!arr[x]; 
	        }
	    else{
	        for(int i=0;i<=n+1;i++){
	            arr[i]=0;
	        }
	    }
	    int c=0;
	    for(int i=0;i<=n+1;i++){
	        if(arr[i]==1){
	        c++;
	        }
	    }
		cout<<c<<endl;
	}
	
	return 0;
}
