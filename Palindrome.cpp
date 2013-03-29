//http://www.codechef.com/COOK32/problems/TAPALIN/
#include<iostream>

using namespace std;
#define mod 1000000007
 
long long mod_pow(long long a,long long b){
	long long r = 1;
    long long pw = a;
    while (b > 0){
		if (b & 1)
            r = (r*pw)%mod;
        pw = (pw * pw)%mod;
        b >>= 1;
    }

        
    return r;
}

   
int main(){
	int t;
	
	cin>>t;
	long long x=26;
	while(t--){
		long long n;
		cin>>n;
		 
		long long ex = 0;
		 if(n % 2 != 0)
		 	ex = mod_pow(26, (n+1)/2);
	    
		long long r  = (((2*(mod_pow(26, n/2+1)%mod - 26 + mod)%mod)%mod)*mod_pow(25, mod-2))%mod;
	    r  = (r + ex)% mod;
		
		cout<<r<<endl;

	}




	return 0;
}
