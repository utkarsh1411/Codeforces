#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<cstdio>

using namespace std;

typedef long long ll;

int t, n;

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(ll i = 4*n; i>2*n; i-=2){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
