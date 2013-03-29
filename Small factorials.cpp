//http://www.codechef.com/problems/FCTRL2/

#include<iostream>
 
using namespace std;
 
int main(){
	int t,n;
	cin>>t;
	while(t>0){
		cin>>n;
		n= n<=1?1:n;
		if(n==2 || n==1){
			cout<<n<<endl;
		}else{
		int s[200];
		s[0]=2;
 
		for(int i=1;i<200;i++)
			s[i]=0;
 
	
		int temp=0,mul,j=0,k=0;		
		for(int i=3;i<=n;i++){
			k=0;
				while(k<=j){
					mul = s[k] * i + temp;
					temp = mul/10;
					s[k] = (mul%10);
					k++;		
				}
				
				while(temp>0){
					j++;	
					s[j]= temp%10;
					temp/=10;
				}
		}
 
			while(j>=0){				
				cout<<s[j];
				j--;
			}
			cout<<endl;
		}
		t--;
	}
	return 0;
}
 