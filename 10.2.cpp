#include<stdio.h>

int main(){
	int arr[]={43,53,36,73,23,44,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("mang so nguyen chua sap xep la:");
	for(int i=0 ; i<n ; i++){
	printf("%d\t",arr[i]);
    }
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<n-1-i ; j++){
    		if(arr[j+1]<arr[j]){
    			int temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
	printf("\nmang so nguyen da sap xep la:");
	for(int i=0 ; i<n ; i++){
	printf("%d\t",arr[i]);
    }
    
    return 0;
}
