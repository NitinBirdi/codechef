//http://www.codechef.com/problems/ROWCOLOP

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	long n,q,maxc=0,maxr=0;
	scanf("%ld %ld",&n,&q);
	int row[n],col[n];

	for(int i=0;i<n;i++){
		row[i]=0;col[i]=0;
	}


	while(q--){
		char s[20];
		long a;int p;
		scanf("%s",s);
		if(s[0]=='C'){
			scanf("%ld %d",&a,&p);a--;
				col[a]+=p;if(col[a]>maxc)maxc=col[a];
					
				
		}else{//rowset
			scanf("%ld %d",&a,&p);
			a--;
			row[a]+=p;if(row[a]>maxr)maxr=row[a];
				
		}			
	}cout<<maxc+maxr<<endl;
	return 0;
}