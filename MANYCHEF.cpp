//http://www.codechef.com/problems/MANYCHEF/

#include<iostream>
 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x=s.length();
		for(int i=x-1;i>=0;i--){
			if(i-3>=0 && (s.at(i)=='F' || s.at(i)=='?') && (s.at(i-1)=='E' || s.at(i-1)=='?') && (s.at(i-2)=='H' || s.at(i-2)=='?') && (s.at(i-3)=='C' || s.at(i-3)=='?')){
				s.at(i-3)='C';s.at(i-2)='H';s.at(i-1)='E';s.at(i)='F';i-=3;
			}else if(s.at(i)=='?') s.at(i)='A';
		}
		cout<<s<<endl;
	}
	return 0;
}