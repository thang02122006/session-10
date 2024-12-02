#include<stdio.h>

int main(){
	int arr[]={43,53,74,23,14,84};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("mang chua sap xep la:\n");
	for(int i=0 ; i<n ; i++){
		printf("%d\t",arr[i]);
	}
    for(int i=1 ; i<n ; i++){
    	int a=arr[i];
    	int j=i-1;
    	while(j>=0 && arr[j]>a){
    		arr[j+1]=arr[j];
    		j--;
		}
		arr[j+1]=a;
	}
	printf("mang da sap xep la:\n");
	for(int i=0 ; i<n ; i++){
		printf("%d\t",arr[i]);
	}
    
    return 0;
}
