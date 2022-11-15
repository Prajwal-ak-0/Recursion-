#include<iostream>
using namespace std;

int fun(int s,int e){
	if(s==e){
		return 1;
	}
	if(s>e){
		return 0;
	}
	int count=0;
	for(int i=1;i<6;i++){
		count+=fun(s+i,e);
	}
	return count;
}
int main(){
	int ans=fun(0,3);
	cout<<ans;
}