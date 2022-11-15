#include<iostream>
using namespace std;

int partition(int a[],int s,int e){
	int pivot=a[s];
	int count=0;
	
	for(int i=s+1;i<=e;i++){
		if(a[i]<=pivot){
			count++;
		}
	}
	
	int pivotindex=s+count;
	swap(a[pivotindex],a[s]);
	
	int i=s;
	int j=e;
	
	while(i<pivotindex && j>pivotindex){
		if(a[i]<pivot){
			i++;
		}
		else if(a[j]>pivot){
			j--;
		}
		else{
			swap(a[i++],a[j--]);
		}
	}
	return pivotindex;
}

void quicksort(int a[],int s,int e){
	if(s>e){
		return;
	}
	int p=partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}