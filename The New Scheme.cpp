//http://www.codechef.com/problems/NEWSCH/

#include<iostream>
#define MOD 1000000007
using namespace std;
 
long long pow(long long a,int b)
{
    long long ans=1;
    while(b>=1){
        if(b&1){
			ans*=a;
			ans%=MOD;
		}
        a*=a;a%=MOD;
        b>>=1;
    }
    return ans;
}
 
int main(){
	int t;
	long long n;
	cin>>t;
	while(t--){
		cin>>n;		
		if(n%2==0)
			n=3*pow(3,(n-1))+3;
		else n=3*pow(3,(n-1))-3;
		
		cout<<(n%MOD)<<endl;
	}
 
 
	
	return 0;
}