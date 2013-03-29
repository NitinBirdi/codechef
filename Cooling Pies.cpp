//http://www.codechef.com/problems/COOLING

#include<iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
 
int main(){
	int t,n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		int pie[n],rack[n],min_pie,min_rack,ct=0;
		
		for(int i=0;i<n;i++){
			cin>>pie[i];
		}
		for(int i=0;i<n;i++){
			cin>>rack[i];
		}
		qsort (pie, n, sizeof(int), compare);
		qsort (rack, n, sizeof(int), compare);
		
		min_pie = 0;
		min_rack=0;
		while(min_rack<n && min_pie<n){
					
			if(rack[min_rack]>=pie[min_pie]){
				ct++;
				min_pie++;
			}
				min_rack++;
		
		}
		cout<<ct<<endl;
 
	}
 
 
	
	return 0;
}