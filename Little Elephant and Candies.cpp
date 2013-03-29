//http://www.codechef.com/problems/LECANDY/

#include<stdio.h>
#include<iostream>
 
using namespace std;
 
int scan(){
    unsigned int acc = 0;
    register char buf;
    buf = getchar();
    while(buf!=10&&buf<='9'&&buf>='0')
    {
         acc = acc * 10 + buf - '0';
         buf = getchar();
    }
    return(acc);
}
 
int main(){
	int t,n;
	long c;
	t=scan();
	
	while(t--){
		n=scan();
		c=scan();
 		
 		for(int i=0;i<n;i++){
			c-=scan();
 		}
		if(c<0){
			printf("No\n");
		}else{
			printf("Yes\n");
 
		}
 
 
 
 
	}
 
	
 
	return 0;
}
 
 