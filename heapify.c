#include<stdio.h>

//fuction to perform heapify operation

void heapify(int arr[], int n, int rootnode){
    int largest = rootnode;
    int l = 2 * rootnode + 1;
    int r = 2 * rootnode + 2;

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    // If largest is not root
    if (largest != rootnode) {
        int temp = arr[rootnode];
        arr[rootnode] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[] ,int n){
for(int i =n/2-1;i>=0;i--){
    heapify(arr,n,i);
}


//one by one extract an element from heap 
for(int i=n-1;i>0;i--){
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;
    //call max hapify on the reduced heap
    heapify(arr,i,0);
}
}


int main(){
    int arr[] = {13,3,434,65,8,5,343,24,3,3,3,43565,3656,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr,n);
    printf("Sorted array : \n");
    for(int i=0;i<=n-1;i++){
       printf("%d \t",arr[i]);
    }
}