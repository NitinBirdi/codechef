//http://www.codechef.com/problems/TWTCLOSE/

#include<iostream>
 
using namespace std;
 
 
 
int main(){
	
		int n,k,close;
		cin>>n>>k;
		string s;
		int x[n];
		for(int i=0;i<n;i++){
			x[i]=0;
		}
		int ct=0;
		for(int i=0;i<k;i++){
			
			cin>>s;
			if(s!="CLOSEALL"){
				cin>>close;
				if(x[close-1]){
					x[close-1]=0;	
					ct--;
				}else{
					x[close-1] =1;
					ct++;
				}
			}else{
				ct=0;
				for(int i=0;i<n;i++){
					x[i]=0;
					
				}		
			}
			cout<<ct<<endl;
		}
		
	
 
 
}
 