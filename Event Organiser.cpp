//http://www.codechef.com/problems/MAXCOMP/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		
		cin>>n;
		int s,e,m=0,matrix[49][49]={0},max[49]={0},e_max=0;

		for(int i=0;i<n;i++){
			cin>>s>>e>>m;
			if(e>e_max)
				e_max=e;

			if(m>matrix[s][e])
				matrix[s][e] = m;
		}
		
		for(int i=1;i<=e_max;i++){
			m=0;
			for(int j=0;j<i;j++){
				if(m < matrix[j][i]+max[j])
					m = matrix[j][i]+max[j];
				max[i] = m ;
			}

		}
		cout<<max[e_max]<<endl;


	}


	
	return 0;
}

 
 