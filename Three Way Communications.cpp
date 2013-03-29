//http://www.codechef.com/problems/COMM3

#include<iostream>

using namespace std;
#define sq(a) ((a)*(a))



int main(){
	int t;
	
	cin>>t;
	
	while(t--){
		int r,x0,x1,x2,y0,y1,y2;
		cin>>r>>x0>>y0>>x1>>y1>>x2>>y2;
		r=sq(r);
             
		if(((sq(x0-x1) + sq(y0-y1))<=r && (sq(x0-x2)+ sq(y0-y2) <= r)) || ((sq(x0-x2)+ sq(y0-y2)) <= r && (sq(x1-x2) + sq(y1-y2)) <= r) || ((sq(x0-x1) + sq(y0-y1)) <= r && (sq(x1-x2) + sq(y1-y2)) <= r)){
			cout<<"yes";
		}else{
			cout<<"no";
		}
		cout<<endl;
	}


}

