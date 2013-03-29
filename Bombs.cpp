//http://www.codechef.com/CRNM2013/problems/CRNM1305/

#include<iostream>
 
using namespace std;
 
int abs(int a,int b){
	if(a>b) return a-b;
	else return b-a;		
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,x,y,res=0;
		cin>>n>>x>>y;
		long long arr[n],arr1[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i]>>arr1[i];
		}
		
		for(int i=0;i<n;i++){
			res+=2*(abs(arr[i],x)+abs(arr1[i],y));
		}
	
		cout<<res<<endl;
 
		
	}
 
 
	return 0;
}