//http://www.codechef.com/problems/LEPERMUT/

#include<iostream>
 
#define abs(a) (a>0?a:(-a))
 
using namespace std;
 
int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		int arr[n],i=0,tot=0;
		
		for(i=0;i<n;i++){
			cin>>arr[i];				
			if(abs((i+1-arr[i]))>1)
				tot++;
		}
		i-=tot;				
		if(i==n){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}