#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
    struct str1{
        int area;
        int perimeter;
    };
    int circle(){
        struct str1 a1;
        double pi = 3.14 , r = 12.5;
        a1.area = pi*(r*r);
        a1.perimeter = 2*pi*r;
        printf("area(circle = %d\n perimeter(circle) = %d\n",a1.area,a1.perimeter);
        return 0 ;
    }
    int square(){
        struct str1 a2;
        int a = 20;
        a2.area = a^2;
        a2.perimeter = 4*a;
        printf("area(square) = %d\n perimeter(square) = %d\n",a2.area,a2.perimeter);
        return 0;
    }  
    int rectangle(){
        struct str1 a3;
        double l = 45.5 , b = 45.5;
        a3.area =  l * b;
        a3.perimeter = 2*(l + b);
        printf("area(rectangle) = %d\n perimeter(rectangle) = %d\n",a3.area,a3.perimeter);
    }
    int main(){
        circle();
        square();
        rectangle();
    }


    
