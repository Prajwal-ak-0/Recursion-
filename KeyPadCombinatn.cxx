#include<iostream>
#include<vector>
using namespace std;

	void solve(string digit,string output,int index,vector<string>&ans,string mapping[]){
		if(index>=digit.length()){
			ans.push_back(output);
			return;
		}
		
		int num=digit[index]-'0';
		string value=mapping[num];
		for(int i=0;i<value.length();i++){
			output.push_back(value[i]);
			solve(digit,output,index+1,ans,mapping);
			output.pop_back();
		}
	}
 
   vector<string> fun(string digit){
 	vector<string> ans;
 	string output="";
 	int index=0;
 	string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 	solve(digit,output,index,ans,mapping);
 	return ans;
 }
 
 int main(){
 	string s;
 	cin>>s;
 	vector<string>sol=fun(s);
 	for(int i=0;i<sol.size();i++){
 		cout<<sol[i]<<"  ";
 	}
 }