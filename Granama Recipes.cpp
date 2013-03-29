//http://www.codechef.com/DEC12/problems/GRANAMA/

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		string s,r;
		cin>>s>>r;
		int num[26]={0},num1[26]={0},fg=0;
		
		for(int i=0;i<s.length();i++){
			int val = s.at(i)-97;
			num[val]++;
		}
		
		for(int i=0;i<r.length();i++){
			int val = r.at(i)-97;
			num1[val]++;
		}
		
		for(int i=0;i<26;i++){
			if((num[i] && (!num1[i])) || ((!num[i]) && num1[i])){
				fg=1;
			}
		}
		
		if(fg==1){
			printf("YES\n");
		}else{
			for(int i=0;i<26;i++){
				if(num[i]!=num1[i]){
						fg=2;
						break;
					}
			}
			
			if(fg==2){
				printf("NO\n");
			}else printf("YES\n");


		}
			
	}

	return 0;
}


