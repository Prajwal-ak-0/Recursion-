#include<iostream.h>
using namespace std;

bool fun(int a[],int n ,int ele){
	if(n==0){
		return false;
	}
	if(a[0]==ele){
		return true;
	}
	fun(a+1,n-1,ele);
}
	
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ele;
	cin>>ele;
	bool ans=fun(a,n,ele);
	cout<<ans;
}