#include <stdio.h>


void print(int *arr,int length){
	
    for(int i=0;i<length;i++){
        printf("arr[%d] = %d\n",i,*(arr+i));
    }
    printf("\n");
}
int main() {
	
    int arr[]={10,12,13,15,18};
    int *arrptr=arr;
    int length = sizeof(arr)/sizeof(int);
    
    print(&arr, length);
    
    return 0;
}
