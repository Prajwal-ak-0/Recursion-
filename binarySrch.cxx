#include<iostream.h>
using namespace std;

bool fun(int a[],int n,int s,int e,int ele){
	int mid=(s+e)/2;
	if(a[mid]==ele){
		return true;
	}
	if(s>e){
		return false;
	}
	if(a[mid]>ele){
		fun(a,n,s,mid-1,ele);
	}
	else if(a[mid]<ele){
		fun(a,n,mid+1,e,ele);
	}
	
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
	bool sol=fun(a,n,0,n-1,ele);
	cout<<sol;
}