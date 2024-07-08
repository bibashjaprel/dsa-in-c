#include<stdio.h>

int towerofhonai(int disknumber,char source,char auxulary,char destination){
    if(disknumber==1){
        printf("moving disk source to deset %c to %c \n",source,destination);
    }

    else{
        towerofhonai(disknumber-1,source,destination,auxulary);
        printf("moving %d disk from %c to %c \n ",source,destination,auxulary);
        towerofhonai(disknumber-1,auxulary,source,destination);
    }
     return 0;
}

int main(void){
       int numdisk=3;
    towerofhonai(numdisk,'A','B','C');
    return 0;
}