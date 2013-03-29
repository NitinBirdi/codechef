//http://www.codechef.com/problems/HS08TEST

#include<stdio.h>

int main(){
	int amt;
	float bal;
	scanf("%d %f",&amt,&bal);
	
	if(amt%5==0 && (bal-amt-0.5)>0){
		printf("%.2f",bal-amt-0.5);
	}else{
		printf("%.2f",bal);
	}



	return 0;
}
