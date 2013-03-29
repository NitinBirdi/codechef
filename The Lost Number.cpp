//http://www.codechef.com/CRNM2013/problems/CRNM1301/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
bool compare(string a, string b ) {  
        int i, j;
        for( i = 0; i < a.size() && i < b.size(); ++i )
               if( a[ i ] != b[ i ] )
                     break;
        if( i < a.size() && i < b.size() ) 
               return a[ i ] < b[ i ];
        if( i == a.size() )               
        {
               string suffix = b.substr( i );
               return a + suffix < suffix + a;
        }
        else                               
        {
               string suffix = a.substr( i );
               return suffix + b < b + suffix;
        }
}
 
 
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		vector<string> vs;  
        string s;
		
		for(int i=0;i<n;i++){
			cin>>s;
			vs.push_back(s); 
		}
		
		sort( vs.begin(), vs.end(), compare );  
        for ( int i = vs.size()-1; i >= 0; i-- ) {  
                cout << vs[i];  
        }  
		cout<<endl;
 
		
	}
 
 
	return 0;
}