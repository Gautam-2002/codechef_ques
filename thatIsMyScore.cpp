#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int i,p[n],s[n],a[9]={0},m=0;
	    for(i=0;i<n;i++){
	        cin>>p[i];
	        cin>>s[i];
	        if(p[i]>=1 && p[i]<=8){
	            if(a[p[i]] < s[i]){
	                m+=s[i];
	            	a[p[i]]=s[i];
				}
	        }
	    }
	    cout<<m<<endl;
	    
	}
	return 0;
}
// #include <iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,count=0,i;
//         cin>>n;
//         int res[12]={0};
//         for( i=1;i<=n;i++){
//             int p,s;
//             cin>>p>>s;
//             if(p<=8){
//                 if(s>res[p])
//                 res[p]=s;
//             }
//         }
//         for(i=0;i<=11;i++)
//             count=count+res[i];
//         cout<<count<<endl;
//     }
//  return 0;
// }