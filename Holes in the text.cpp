//http://www.codechef.com/problems/HOLES

#include<iostream>

using namespace std;
int main(){
	int t;
	
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		int ct=0;
		for(int i=0;i<s.length();i++){
			if(s.at(i)=='A' || s.at(i)=='D' || s.at(i)=='O' || s.at(i)=='P' || s.at(i)=='Q' || s.at(i)=='R'){
				ct++;
			}else if(s.at(i)=='B')
				ct+=2;

		}
		cout<<ct<<endl;

	}


	
	return 0;
}
