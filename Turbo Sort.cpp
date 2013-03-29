//http://www.codechef.com/problems/TSORT

#include<stdio.h>
 
int allNum[1000000];
int main(){
	long long t,n;
	scanf("%lld",&t);
	long long i=0,max=0;
	
	while(t>0){		
			scanf("%lld",&n);
			if(n>max)
				max=n;
				
			allNum[n]++;			
			i++;		
		t--;
	}
 
	for(i=0;i<=max;i++){
			while(allNum[i]){
				printf("%lld \n",i);
				allNum[i]--;
			}
		}
	
	return 0;
}