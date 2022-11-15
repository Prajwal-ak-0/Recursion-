#include<iostream.h>
using namespace std;

void fun(string a[], int n){
	
	if(n==0){
		return;
	}
	int digit=n%10;
	n=n/10;
	fun(a,n);
	cout<<a[digit]<<"  ";
}
	
	
int main(){
	int n;
	cin>>n;
	string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	fun(a,n);
}