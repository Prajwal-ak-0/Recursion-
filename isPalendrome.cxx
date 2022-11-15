#include<iostream.h>
using namespace std;

bool fun(string s,int i,int j){
	if(i>j){
		return true;
	}
	if(s[i]!=s[j]){
		return false;
	}
	else{
		return fun(s,i+1,j-1);
		
	}
	
}
	
int main(){
	string s;
	cin>>s;
	bool sol=fun(s,0,s.length()-1);
	cout<<sol;
}