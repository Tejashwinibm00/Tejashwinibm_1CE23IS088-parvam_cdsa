#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int a=100;
    switch(a){
       case 1:
        printf("hi1");
        case 10:
        printf("hi2");
        break;
        case -1:
        printf("hi3");
        break;
    }
} 