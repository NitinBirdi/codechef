//http://www.codechef.com/problems/ONP

#include<iostream>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	string s, expr="", post="";
	while(t--){
		cin>>s;
		expr="", post="";
		int expr_ct=0;
		expr+="(";
		
 
		for(int i=1;i<s.length();i++){
			char st = s.at(i);
			
			if(st==')'){
			
				int temp=expr_ct;
				while(expr.at(temp)!='('){
					if(expr.at(temp)){
						cout<<expr.at(temp);
						expr.at(temp)='\0';
					}
					temp--;
				}if(temp>0)
					expr.at(temp)='\0';
 
			}
			else if(st=='*' || st=='+' || st=='-' || st=='/' || st=='^' || st=='('){
				expr+=st;
				expr_ct++;
			}
			else cout<<st;
			
		}
	cout<<endl;
	}
 
 
	
	return 0;
}