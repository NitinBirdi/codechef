//http://www.codechef.com/JAN13/problems/SALARY/

#include<iostream>
 
using namespace std;
 
int main(){
	
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		int arr[n], sm=10000000,net=0;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<sm){
				sm=arr[i];
			}
		}
		
		for(int i=0;i<n;i++){
			net+=(arr[i]-sm);
		}
		cout<<net<<endl;
 
	}
 
 
	return 0;
}