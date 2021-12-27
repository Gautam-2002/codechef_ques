#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b,s1=0,s2=0;
	int w,l=0;
	for(int i=0;i<n;i++){
	    cin>>a>>b;
	    s1+=a;
	    s2+=b;
	    
	    if(abs(s1-s2)>l){
	        l=abs(s1-s2);
	        if(s1>s2){
	        w=1;
	        }
	        
	        else{
	        w=2;
	        }
	    }
	}
	
	    cout << w<<" "<< l<<endl ;

	return 0;
}
