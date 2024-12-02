#include<stdio.h>

int main(){
	int arr[]={4,5,2,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int a;
	int x=0;
    printf("nhap phan tu : ");
    scanf("%d",&a);
    for(int i=0 ; i<n ; i++){
    	if(arr[i]==a){
    		printf("vi tri cua phan tu %d la %d",a,i);
    		x=1;
		}
	}
		if(!x){
			printf("khong co phan tu nao");
		}	

    return 0;
}
