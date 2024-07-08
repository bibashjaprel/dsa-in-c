#include<stdio.h>
int main(){
    int a[]= {2,24,34,3,4,23,32,232},key,i,n;
    int arrlen = sizeof(a)/sizeof(a[1]);

    printf("Enter the number to serach \n");
    scanf("%d",&key);
 
    for(i=0;i<arrlen;i++){
        if(a[i]==key){
            printf("%d is present at localtion %d \n",key,i+1);
            break;
        }
        if(i==n)
            printf("%d is not present in array \n",key);
         return 0;
    }
  
}
