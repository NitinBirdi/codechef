//http://www.codechef.com/problems/HORSES/

#include<iostream>
#include <algorithm>
#define abs(a) a>0?a:(-a)
 
using namespace std;
 
int compare( const void *a, const void *b ){
	return ( *(int*)a - *(int*)b );
}
 
int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		long a[n],diff=1000000000;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort( a, a + n);
		for(int i=0;i<n;i++){
			long temp = abs((a[i]-a[i+1]));
				
				if(temp<diff){
					diff=temp;
				}
		}
		
		cout<<diff<<endl;
			
	}
	return 0;
}
 