#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int x,int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==x)
		  return mid;
		if(arr[mid]<x)
		  low=mid+1;
		else
		  high=mid-1;
	}
	return -1;
}
int main(){
	int n=10;
	int arr[]={3,10,90,89,76,100,55.78};
	int x=55;
	int result=binarysearch(arr,x,n);
	if(result=-1)
	  cout<<"element is not present in array"<<endl;
	else
	  cout<<"element is present at index"<<result;
	return 0;
}
