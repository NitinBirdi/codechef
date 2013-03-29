//http://www.codechef.com/DSPF2013/problems/DS5/

#include<iostream>
 
using namespace std;
 
int solve(int n, int k){
  if(n==1) return 1;
  else  return(solve(n-1, k) + k-1) % n + 1;
}
 
int main(){
	int n;
	cin>>n;
	
	while(n){
		if(n==13) cout<<1<<endl;
		else
		for (int i=5;;i++){				
		 if((solve(n-1,i))==12){
        		cout<<i<<endl;
         		break;
          }
		      
      }	
		
		cin>>n;
	}
 
 
	
	
	return 0;
}