#include<stdio.h>

int main(){
	int arr[]={38,29,85,12,48,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("mang chua sap xep la:\n");
	for(int i=0 ; i<n ; i++){
		printf("%d\t",arr[i]);
	}
	
}
