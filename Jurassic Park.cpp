//http://www.codechef.com/problems/NI01/

#include<iostream>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,m,q,p,r,k,comp=0,l=0;
		cin>>n>>m>>q>>p>>r>>k;
		int temp=n;
		int trip[n];
		for(int i=0;i<n;i++){
			trip[i]=0;
		}
 
 
		int num_cars=m+q;
		for(int i=1;i<=k;i++){
			if(i%r==0 && m){
				m--;
				q++;
			}			
			for(int j=0;j<n;j++){
				if(trip[j])
						trip[j]--; 
				if(trip[j]==0){
					if(q>0){
						q--;
						trip[j]=p;
					}	
				}
			}	
			
 
			
 
		}
		for(int i=0;i<n;i++){
			if(trip[i]==0)
				l++;
			else comp++;
		}
 
 
		cout<<l<<" "<<num_cars-m-q-comp<<" "<<" "<<m<<" "<<q<<endl;
 
	}
 
 
	
	return 0;
}