#include<stdio.h>
void bubbleshot(int arr[]){
    int len = sizeof(arr) / sizeof(arr[1]);
    for (int i  = 0; i < len-1; i++) {
        for (int j=0 ; j-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j+1] = arr[j];
                arr[j]=temp;
            }
        }
        
    }
}

void display(int arr[]){
        int arr = sizeof(arr) / sizeof(arr[1]);
        for(int i=0;i<arr;++i){
            printf("%d",arr[i]);

        }
}
void main(){
    int arr = {2,4,5,6,7,5,5};
    bubbleshot(arr);
    printf("Sorted Array : \n");
    display(arr); 
}