#include<iostream.h>
using namespace std;

int first(int a[],int n,int i,int ele){
	if(i==n){
		return -1;
	}
	if(a[i]==ele){
		return i;
	}
	return first(a,n,i+1,ele);
}
int main(){
	int n,ele;
	cin>>n>>ele;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=first(a,n,0,ele);
	cout<<ans;
}
