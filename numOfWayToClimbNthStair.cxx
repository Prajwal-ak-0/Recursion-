#include<iostream.h>
using namespace std;

int fun(int n){
	if(n==2){
		return 2;
	}
	if(n==1){
		return 1;
	}
	int ans=fun(n-1)+fun(n-2);
	return ans;
}

	
int main(){
	int n;
	cin>>n;
	int sol=fun(n);
	cout<<sol;
}