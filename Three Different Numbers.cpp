//http://www.codechef.com/JAN13/problems/THREEDIF/

#include<iostream>
#include<algorithm>
 
using namespace std;
 
#define MOD 1000000007
 
int main(){
    int n;
    cin>>n;
    
	while(n--){
        long long ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        long long ans = (((((ar[0])%MOD)*((ar[1]-1)%MOD))%MOD)*((ar[2]-2)%MOD))%MOD;
        cout<<ans<<endl;
    }
} 