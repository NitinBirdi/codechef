//http://www.codechef.com/problems/CIELDIST

#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int d[3]={0};
		cin>>d[0]>>d[1]>>d[2];
		sort(d,d+3);
		cout<<(((d[0]+d[1])<d[2])?(d[2]-d[1]-d[0]):0)<<endl;
	}
	return 0;
}