//http://www.codechef.com/FEB13/problems/BUY1GET1/

#include<iostream>
 
using namespace std;
 
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		int arr[52]={0};
		cin>>s;
		for(int i=0;i<s.length();i++){
			char c=s.at(i);
 
			if(c>=65 && c<=90)
				arr[(int)(c-65)]++;
			else if(c>=97 && c<=122)
				arr[(int)(c+26-97)]++;
		}
		int ct=0;
		for(int i=0;i<52;i++){
			if(arr[i]%2!=0){
				ct+=1;
			}
			ct+=(arr[i]/2);
		}
		cout<<ct<<endl;
 
	}
 
 
 
	return 0;
}