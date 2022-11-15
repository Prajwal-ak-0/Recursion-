#include<iostream>
using namespace std;

void toh(int n,string source,string helper,string destination){
	if(n==1){
		cout<<"move "<<n<<" from "<<source<<" to "<<destination<<" ..."<<endl;
		return;
	}
	toh(n-1,source,destination,helper);
	cout<<"move "<<n<<" from "<<source <<" to "<< destination<<"..."<<endl;
	toh(n-1,helper,source,destination);
}
int main(){
	int n;
	cin>>n;
	string source="src";
	string helper="help";
	string destination="dest";
	toh(n,source,helper,destination);
}