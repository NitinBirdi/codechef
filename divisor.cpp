//http://www.codechef.com/DSPF2013/problems/DS15/

#include<iostream>
 
using namespace std;
 
 
int main(){
	
	long t;
	cin>>t;
	
	while(t--){
		long n;
		cin>>n;
		long res=1;
		for(int i=2;i<=n/2;i++){
			if(n%i==0) res+=i;
		}
		cout<<res<<endl;
 
	}
 
 
	return 0;
}