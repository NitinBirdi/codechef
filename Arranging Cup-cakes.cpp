//http://www.codechef.com/problems/RESQ/

#include<iostream>
#include<math.h>
using namespace std;
 
 
int main(){
	int t;
	
	cin>>t;
	
	while(t--){
		long n;
		cin>>n;
		
		int sq = (int)sqrtl((long double)n);
		int min=0,diff=n-1;
		for(int i=sq;i>1;i--){
            if(n%i==0){
                min = n/i;
                diff = min - i;
                break;
            }
        }
		
			cout<<diff<<endl;
		
 
	}
 
 
}