//http://www.codechef.com/problems/ARAN01/

#include<stdio.h>
#include<string.h>
 
	
	int main(){
	
		
		int t,val,i;
		scanf("%d",&t);
 
		char n[100];
 
		while(t>0){
			
			scanf("%s",&n);
			val=i=0;
			for(i=0;i<strlen(n);i++){
				 val+=n[i];
			}
			val /=i;
			printf("%c\n",val);
			t--;
		}
		return 0;
	}