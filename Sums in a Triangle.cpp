//http://www.codechef.com/problems/SUMTRIAN

#include<stdio.h>
 
int main(){
	
	int t,n;
	scanf("%d",&t);
	
	while(t>0){
		scanf("%d",&n);
		int arr[n][n],i,j;
		
			for(i=0;i<n;i++){
				for(j=0;j<=i;j++){
					scanf("%d",&arr[i][j]);
				}
			}
			
			for(i=n-1;i>0;i--){
				for(j=0;j<i;j++){
					arr[i-1][j] +=  arr[i][j]>=arr[i][j+1]?arr[i][j]:arr[i][j+1];
				}
			}
		printf("%d\n",arr[0][0]);
		t--;
	}
 
 
	return 0;
}