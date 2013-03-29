//http://www.codechef.com/COOK31/problems/NOLOGIC/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int t,j=1;//freopen("ab1.txt","r",stdin);

	cin>>t;
	
	char s[317];
	t++;
	while(t--){
		int arr[26]={0};
		cin.getline (s,317);

		for(int i=0;s[i]!='\0';i++){
			if(s[i]>=65 && s[i]<=90){
				arr[s[i]-65]++;
			}else if(s[i]>=97 && s[i]<=122){
				arr[s[i]-97]++;
			}
		}
		string str="";
		
		for(int i=0;i<26;i++){
			if(!arr[i])str+=(char)(i+97);
		}
		if(j>1){
			if(str==""){
			cout<<"~"<<endl;
			}else {
				cout<<str<<endl;
			}	
		}
	j++;

		


	}


	
	return 0;
}
