//http://www.codechef.com/problems/LEDIV/

#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(!b)  return a;
    return gcd(b,a%b);
}

int scan(){
    unsigned int acc = 0;
    register char buf;
    buf = getchar();
    while(buf!=10&&buf<='9'&&buf>='0')
    {
         acc = acc * 10 + buf - '0';
         buf = getchar();
    }
    return(acc);
}

int main(){
	int t,n,primes[100001]={0,-1};
	
	for(int i=2;i<=317;i++){
		while(primes[i]!=0){
			i++;
		}
		for(int j=i;j<=100000;j+=i){
			if(!primes[j]){
				primes[j] = i;	
			}	
		}	
	}
	
	t=scan();
	
	while(t--){
		n=scan();
		int a,b,lc;
		a=scan();
		lc=gcd(a,0);
 
		for(int i=0;i<n-1;i++){
			a=scan();
			lc=gcd(lc,a);
 
		}
		if(lc==1)
			lc=-1;
			else{
				if(primes[lc]){
					lc=primes[lc];
				}
			}

		printf("%d\n",lc);
 
	}

	

	return 0;
}
