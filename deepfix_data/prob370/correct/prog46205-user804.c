#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d/n", &a,&b,&c);
    if (a + b > c){printf("INVALED");
     printf("ACUTE");
     printf("RIGHT");
     printf("OBTUSE");}
else if (a + c > b) {
    printf("INVALID");
 printf("ACUTE");
 printf("RIGHT");
 printf("OBTUSE"); }
else if  (b + c > a){printf("INVALED");
   printf("ACUTE");
 printf("RIGHT");
 printf("OBTUSE");}
    return 0; }