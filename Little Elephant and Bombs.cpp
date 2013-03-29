#include<iostream>
 
using namespace std;
 
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		string st;
		cin>>n>>st;
		if(n>1){
			
		
 
	
			if(st.at(0)=='1'){
				n--;
				st.at(0)=1;
				if(st.at(1)!='1'){
					n--;
					st.at(1)=1;
				}
			}
			if(st.at(st.length()-1)=='1'){
				n--;
				st.at(st.length()-1)=1;
				if(st.at(st.length()-2)!='1'){
					n--;
					st.at(st.length()-2)=1;
				}
			
			}
	
	
			for(int i=1;i<st.length()-1;i++){
				if(st.at(i)=='1' && st.at(i)!=1){
					n--;
					st.at(i)=1;
					if(st.at(i+1)!='1' && st.at(i+1)!=1){
						st.at(i+1)=1;
						n--;
					}
	
					if(st.at(i-1)!='1' && st.at(i-1)!=1){
						st.at(i-1)=1;
						n--;
					}
	
				}
			}
	}else{
		if(st=="1")
			n--;
	}
if(n<0)
n=0;
		cout<<n<<endl;
 
 
 
	}
 
 
	
	return 0;
}
 