//http://www.codechef.com/problems/NUMGAME/

#include<stdio.h>
 
using namespace std;
 
 
int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		long n;
		scanf("%ld",&n);
		
 
		if(n%2==0)
			printf("ALICE\n");
		else printf("BOB\n");
 
	}
 
 
	
	return 0;
}