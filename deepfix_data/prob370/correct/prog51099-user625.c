#include<stdio.h>
int main() {
    int a; scanf("%d",&a);
    int b; scanf("%d",&b);
    int c; scanf("%d",&c);
    if (a*a+b*b==c*c){printf("RIGHT");}
    else if(a*a+b*b<c*c){printf("OBTUSE");}
    else if(a*a+b*b>c*c){printf("ACUTE");}
    else printf("INVALID");
    return 0; }