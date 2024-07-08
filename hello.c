#include<stdio.h>
int add(int a, int b);
int multiply(int a, int b);

int main(){


    add(5,10);
    int mul = multiply(5,10);
    printf("\nThe multiply result : %d ", mul);

    
    
}

int add(int a, int b){
    printf("the sum of the given parameter is : %d", a + b);
}

int multiply(int a, int b){
    int result = a+b;
    // printf("\nthe multiplication of the given paramenter is : %d", a*b);
    return a*b;
}