//http://www.codechef.com/problems/LUCKY10/

#include<iostream>
#define min(a,b) a<b?a:b 
using namespace std;
 
 
int main(){
    
    int t,a7, b7, b4, a4, le_7a,le_7b,le_4a,le_4b,n;
   
    cin>>t;
    
	string a,b;
 
      while(t>0){
                   le_7a = le_7b = le_4a = le_4b = a4 = a7 = b7 = b4 = 0,n = 0;
                   
                   cin>>a;
                   cin>>b;
                   
					  for(int i=0;i<a.length();i++){
                                 if(a[i]=='7'){
                                       a7++;
                                 }else if(a[i]=='4'){
                                       a4++;
                                 }else if(a[i]<52){
	                                   le_4a++;
	                            }else if(a[i]<55){
	                                   le_7a++;
	                                 }
								
								
                                 if(b[i]=='7'){
                                       b7++;
                                 }else if(b[i]=='4'){
                                       b4++;
                                 }else if(b[i]<52){                              
	                                       le_4b++;
	                             }else if(b[i]<55){
	                                       le_7b++;
	                             }
								      
                   }
                 
				  int temp = 0;
				 if(a7 && le_7b){
					 temp = (min(a7,le_7b));
					 a7-=temp;
					 le_7b-=temp;
					 n+=temp;
				 }
				while(a7>0){
					if(le_4b>0){
						temp =(min(le_4b,a7));
						le_4b-=temp;
						a7-=temp;
						n+=temp;
					}else if(b4>0){
						temp =(min(b4,a7));
						b4-=temp;
						a7-=temp;
						n+=temp;
					}else{
						break;
					}
 
				 }
				
				if(b7 && le_7a){
				 	temp = (min(b7,le_7a));
					 b7-=temp;
					 le_7a-=temp;
					 n+=temp;
				 }
				while(b7>0){
					if(le_4a>0){
						temp =(min(le_4a,b7));
						le_4a-=temp;
						b7-=temp;
						n+=temp;
						
					}else if(a4>0){
						temp =(min(a4,b7));
						a4-=temp;
						b7-=temp;
						n+=temp;
					}else{
						break;
					}
				}
				if(a7>0 && b7>0){
						temp = (min(a7,b7));
						n+=temp;
						a7-=temp;
						b7-=temp;
				}
				while(n>0){
					cout<<'7';
					n--;
				}
				n=0;
					if(le_4b && a4){
						temp = (min(le_4b,a4));	
						le_4b-=temp;
						a4-=temp;
						n+=temp;
					}
					if(le_4a && b4){
						temp = (min(le_4a,b4));	
						le_4a-=temp;
						b4-=temp;
						n+=temp;
					}
					if(a4>0 && b4>0){
						temp = (min(a4,b4));
						n+=temp;
						a4-=temp;
						b4-=temp;
					}
	 
				while(n>0){
					cout<<'4';
					n--;
				}
				cout<<endl;
			
				  
                   t--;
        }
	
   
    return 0;
} 
