#include<iostream>
using namespace std;

void fun(string s){
	if(s.length()==0){
		return;
	}
	if(s[0]!=s[1]){
		cout<<s[0];
		fun(s.substr(1));
	}
	else{
		fun(s.substr(1));
	}
}
int main(){
		string s;
		cin>>s;
		fun(s);
}
		