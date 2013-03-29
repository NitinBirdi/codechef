//http://www.codechef.com/problems/RESN04

#include<iostream>
 
using namespace std;
 
int main(){
	int t,n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		int x,sum=0;
		n++;
		for(int i=1;i<n;i++){
			cin>>x;
			sum+=(x/i);
		}
		
			if(sum%2==0)
				cout<<"BOB\n";
			else cout<<"ALICE\n";
	
	}
	
	return 0;
}