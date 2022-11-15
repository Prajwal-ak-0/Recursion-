#include<iostream.h>
using namespace std;

int  fun(int x,int n){
	if(x==0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	if(n%2==0){
		return fun(x,n/2)*fun(x,n/2);
	}
	else{
		return fun(x,n/2)*fun(x,n/2)*x;
	}
}


int main(){
	int n,x;
	cin>>x>>n;
	int ans=fun(x,n);
	cout<<ans;
}