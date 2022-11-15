#include<iostream.h>
using namespace std;

bool fun(int a[],int n){
	if(n==0 || n==1){
		return true;
	}
	if(a[0]>a[1]){
		return false;
	}
	else{
		fun(a+1,n-1);
	}
}
	
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool ans=fun(a,n);
	if(ans){
		cout<<"sorted";
	}
	else{
		cout<<"not sorted";
	}

}