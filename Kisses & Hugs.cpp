//http://www.codechef.com/problems/CKISSHUG/

#include<iostream>
#define MOD 1000000007
using namespace std;
 
long long pow(long long a, long long b){
	long long r;
	if(b==0) return 1;
	r = pow(a,b/2);
	r = (r*r)%MOD;
	if(b%2) r = (r*a)%MOD;
	return r;
}
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		long long n,n1;
		cin>>n;
		
		n++;
    	n1 = n/2;
    	n = pow(2,n1) + pow(2,(n - n1)) - 2;
 
    	cout<<n%MOD<<endl;
	}
 
	return 0;
}