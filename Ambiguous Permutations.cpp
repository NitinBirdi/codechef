//http://www.codechef.com/problems/PERMUT2/

#include<iostream>
 
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	
	while(n!=0){
		n++;	
		int arr[n],i;
		for(i=1;i<n;i++){
			cin>>arr[i];
		}
		
		for(i=1;i<n;i++){
			if(arr[arr[i]]!=i)
				break;	
		}
 
		if(i==n){
			cout<<"ambiguous"<<endl;
		}else{
			cout<<"not ambiguous"<<endl;
		}
 		cin>>n;
	}
 
	
	return 0;
}