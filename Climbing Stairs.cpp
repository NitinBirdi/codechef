//http://www.codechef.com/FEB13/problems/CLMBSTRS/

#include<iostream>
 
using namespace std;
 
long f[1000001];
 
void fib(){
  long i;
  f[0] = 1;
  f[1] = 1;
 
  for (i = 2; i <= 1000000; i++){
      f[i] = (f[i-1] + f[i-2])%1000000007;
  }
}
long countSetBits(long n){
    long count = 0;
    while(n){
      n &= (n-1) ;
      count++;
    }
    return count;
}
int main(){
	int t;
	fib();
 
	cin>>t;
	
	while(t--){
		long long n;int g;
		cin>>n>>g;
		
		if(g==countSetBits((f[n]%1000000007)))
			cout<<"CORRECT"<<endl;
		else cout<<"INCORRECT"<<endl;
 
	}
}