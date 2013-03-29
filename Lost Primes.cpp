//http://www.codechef.com/problems/L3

#include<iostream>
#include<math.h>
#include <sstream>
  
using namespace std;
bool isprime(long long int num){
	long long x = (long long)sqrtl(num);
	for(long long int i=2;i<=x;i++){
		if(num%i==0)
			return 0;
	}
	return true;
}
 
 
 
int main(){
	int t;
	string n;	
	cin>>t;
	long long temp;
 
	
	while(t>0){
		temp = 0;
		cin>>n;
		int check = 48;
		string indices="";
		istringstream (n) >> temp;
		if(n.length()==1){
			cout<<2<<endl;
			t--;
			continue;
		}
	
		for(int i=n.length()-1;i>=0;i--){
			if(n.at(i)==63){
				if(i==0 && check==48){
					check=49;
				}
				n.at(i)=check;
				indices+=char(i+48);
			}
		}
		istringstream (n) >> temp;
		int st=0,m=1;
			
		while(!isprime(temp)){
			
			int i=0;
                 while(i<indices.length() && n.at(indices.at(st)-48)=='9'){                        
                     n.at(indices.at(i)-48)='0';
                     i++;   					
                 }    
                 
                 n.at(indices.at(i)-48)++;
				
			istringstream (n) >> temp;
			m--;
		}
		if(isprime(temp))
			cout<<n<<endl;
		
		t--;
	}
 
	return 0;
}
 
 