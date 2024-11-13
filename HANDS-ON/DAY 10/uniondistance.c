#include<stdio.h>
#include<math.h>
#include<stdlib.h>
union uno{
  int x1,x2,y1,y2;
  int d;
};
int distance(){
    union uno a1;
    int x1 = 10;
    int x2 = 20;
    int y1 = 20;
    int y2 = 10;
    a1.d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between 2 planes = %d\n",a1.d);  
    return 0;     
}
int main(){
    distance();
}