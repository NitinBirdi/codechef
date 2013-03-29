//http://www.codechef.com/problems/CIELAB/

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
	int a,b;
	long c;
	
		a=scan();
		b=scan();
 		int x=1;
 		a-=b-1;
 		if(a%10==0)
 			a-=2;
 		printf("%d\n",a);
 
 
	return 0;
}