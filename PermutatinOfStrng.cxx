#include<iostream>
#include<vector>
using namespace std;

void solve(string s,int index,vector<string>& ans){
	if(index>=s.length()){
		ans.push_back(s);
		return;
	}
	for(int i=index;i<s.length();i++){
		swap(s[index],s[i]);
		solve(s,index+1,ans);
		swap(s[index],s[i]);
	}
}

vector<string> fun(string s){
	vector<string> ans;
	int index=0;
	solve(s,index,ans);
	return ans;
}

int main(){
	string s;
	cin>>s;
	vector<string> sol=fun(s);
	for(int i=0;i<sol.size();i++){
			cout<<sol[i]<<endl;
		}
		
}