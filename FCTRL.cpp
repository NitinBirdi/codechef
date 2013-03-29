//http://www.codechef.com/problems/FCTRL

#include<iostream>
 
using namespace std;
 
int main(){
	int t;
	long long int n;
	cin>>t;
	
 
	while(t>0){
		cin>>n;
		long long int ct = 0;
		for(long long int i=5;i<=n;i*=5){
			ct+= n/i;
		}
		cout<<ct<<endl;
		t--;
	}
	
	return 0;
}