//http://www.codechef.com/problems/STONES/

#include<iostream>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		string s,j;
		cin>>j>>s;		
		int ct=0;
		for(int i=0;i<s.length();i++){
			for(int k=0;k<j.length();k++){
				if(s.at(i)==j.at(k)){
					ct++;
					break;
				}
			}
		}
		cout<<ct<<endl;
 
	}
 
	return 0;
}