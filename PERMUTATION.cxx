#include<iostream>
using namespace std;

void fun(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		string ros=s.substr(0,i)+s.substr(i+1);
		fun(ros,ans+ch);
	}
}
int main(){
		string s;
		cin>>s;
		fun(s,"");
}
		
		
		
		
		
		