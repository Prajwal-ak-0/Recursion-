#include<iostream.h>
using namespace std;

int fun(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fun(n-1)+fun(n-2);
}
int main(){
	int n;
	cin>>n;
	int ans=fun(n);
	cout<<ans;
}