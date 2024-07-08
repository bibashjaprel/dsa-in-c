#include<stdio.h>
#include<stdlib.h>
int  SIZE = 4;
void push();
void pop();
void show(); // defining prototype
int top = -1;
int inp_array[SIZE];


int main(){
 push();
}




void push(){
    int x;
    if (top==SIZE-1){ // array starting with always zero // size define in header
        printf("Stack overflow memory reached");

    }
    else{
        printf("enter the new element");
        scanf("%d",&x);
        top++;
        inp_arr[top] = x;
    }
}

void pop(){
    if(top== -1){
        printf("Stack underflow no element  left\n");
    }
    else{
        printf("pop element : %d \n" inp_arr[top]);
        top--;
    }
}

void show(){
    if(top==0)
        printf("Stack is empty\n");

    for(int i=top;i>=0;i--){
        printf("\n  %d ",inp_arr[i]);

    }
}