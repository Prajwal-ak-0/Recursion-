#include<iostream>
using namespace std;

void merge(int s,int e,int a[]){
	int mid=s+(e-s)/2;
	int len1=mid-s+1;
	int len2=e-mid;
	
	int *first=new int[len1];
	int *second=new int[len2];
	
	int mainindex=s;
	
	for(int i=0;i<len1;i++){
		first[i]=a[mainindex++];
	}
	
	for(int i=0;i<len2;i++){
		second[i]=a[mainindex++];
	}
	
	int index1=0;
	int index2=0;
	mainindex=s;
	
	while(index1<len1 &&	index2<len2){
		if(first[index1]>second[index2]){
			a[mainindex++]=second[index2++];
		}
		else{
			a[mainindex++]=first[index1++];
		}
	}
	
	while(index1<len1){
		a[mainindex++]=first[index1++];
	}
	
	while(index2<len2){
		a[mainindex++]=second[index2++];
	}
}

void mergesort(int a[],int s,int e){
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(s,e,a);
	
}
	
void main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}