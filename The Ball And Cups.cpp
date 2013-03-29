//http://www.codechef.com/COOK32/problems/TAVISUAL/

#include<iostream>
 
using namespace std;
 
int main(){
	int t;
	
	cin>>t;
	
	while(t--){
		long long n,c,q,l,r;
		cin>>n>>c>>q;
		
		while(q--){
			cin>>l>>r;
			
			if(c>l && c<r)c=r-c+l;
			else if(c==l) c=r;
			else if(c==r) c=l;
 
 
		}
 
		cout<<c<<endl;
		
 
 
	}
 
 
 
 
	return 0;
}
 