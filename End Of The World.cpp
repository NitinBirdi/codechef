//http://www.codechef.com/problems/CHEFHACK/

#include<iostream>
using namespace std;
 
int n,a;
int arr[352][352];
int p[10000001];
 
void gen(){
	p[0]=p[1]=-1;
	long long k=0;
	for(long long i=2;i<=10000000;i++){
		if(p[i]==0){   	
			p[i]=k++;
			for(long long j=i*i;j<=10000000;j+=i)
			p[j]=-1;
		}
	}
}
 
void ghm(int i,int j) {
    if(i<n && i>=0 && j<n && j>=0) {
        if(arr[i][j]!=-1) {
            if(arr[i][j]%2==a && p[arr[i][j]]==-1){
                arr[i][j]=-1;
                ghm(i-1,j); 
                ghm(i+1,j);
                ghm(i,j-1);
                ghm(i,j+1);
            }
        }
    }
}
 
int main(){
	int t;
	gen();
 
	cin>>t;
	
	while(t--){
		cin>>n;		
		long long ct=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}	
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int fg=0;				
 
				if(arr[i][j]!=-1){
					if(p[arr[i][j]]==-1) {
						if(arr[i][j]%2==0){
							ct+=(arr[i][j]/2);a=0;
							ghm(i,j);	
						}else{
							ct+=(arr[i][j]/2+2);a=1;
							ghm(i,j);					
						}
					}else{
						ct+=p[arr[i][j]]; 
	                    arr[i][j]=-1; 
					}
				}				
			}
		}
		cout<<ct<<endl;
	}
 
	return 0;
}
 