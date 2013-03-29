//http://www.codechef.com/DSPF2013/problems/DS7/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
	int t;
	char arr[202];
	scanf("%d\n",&t);
	
	for(int i=0;i<t;i++){
		int c;
		scanf("%d",&c);
		scanf("%s",arr);
		int p=(strlen(arr)/c);
		char brr[20][20];
		
		for(int i=0,k=0,count=0;i<p && k<strlen(arr);i++,count++){
				if(count%2)
					for(int j=c-1;j>=0;j--) 
						brr[i][j]=arr[k++];
				else
					for(int j=0;j<c;j++) 
						brr[i][j]=arr[k++];
		}
		for(int j=0;j<c;j++){
			for(int i=0;i<p;i++)
				printf("%c",brr[i][j]);
		}
		printf("\n");
		}
		 
return 0;
 
} 