#include<iostream.h>
using namespace std;

void fun(string s, int i,int j){
	if(i>j){
		cout<<s;
		return;
	}
	swap(s[i],s[j]);
	i++;
	j--;
	fun(s,i,j);
}
int main(){
	string s;
	cin>>s;
	fun(s,0,s.length()-1);
}