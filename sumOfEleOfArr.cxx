#include<iostream.h>
using namespace std;

int fun(int a[],int n){
	if(n<=0){
		return 0;
	}
	return fun(a,n-1)+a[n-1];
}

int fun1(int a[],int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return a[0];
	}
	int rem=fun1(a+1,n-1);
	int sum=a[0]+rem;
	return sum;
}
	
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=fun(a,n);
	cout<<ans;
	cout<<"sum is: "<<fun1(a,n);
}