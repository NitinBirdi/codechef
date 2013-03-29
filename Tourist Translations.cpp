//http://www.codechef.com/MARCH13/problems/TOTR/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int t;
	//freopen("ab1.txt","r",stdin);

	cin>>t;
	string m,s;
	cin>>m;
	
	for(int i=0;i<t;i++){
		cin>>s;
		char c; string st="";
		for(int i=0;i<s.length();i++){
			if(s.at(i)>=65 && s.at(i)<=90){
				c = m.at(s.at(i)-65);
				if(c>=97 && c<=122)c-=32;
				st+=c;
			}else if(s.at(i)>=97 && s.at(i)<=122){
				char c = m.at(s.at(i)-97);
				if(c>=65 && c<=90)c+=32;
				st+=c;
			}else if(s.at(i)=='_'){
				st+=' ';
			}else{
				st+=s.at(i);
			}
		}
		cout<<st<<endl;	

	}

	return 0;
}
