//http://www.codechef.com/problems/BUYING2/

#include<iostream>
 
using namespace std;
int main(){
	int t,n,p;
 
	cin>>t;
	
	while(t>0){
		
		cin>>n;
		int arr[n],i=0;
		
		cin>>p;
		int sum=0;
		int min = 65535;
		while(n>0){
			cin>>arr[i];
			sum+=arr[i];
            if(arr[i]<min){
                min = arr[i];
            }
			i++;
			n--;
		}
		
	    
		int qty = 0,qty1=0,fg=0;
		qty = sum/p;
		sum-=min;
		qty1=sum/p;
        if(qty1>=qty){
                     	cout<<-1<<"\n";
        }else{
                            
			cout<<qty<<"\n";
		}
 
 
 
		
 
		t--;
	}
 
 
	
	return 0;
	
}