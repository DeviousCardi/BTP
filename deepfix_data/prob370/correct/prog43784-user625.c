#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&c,&b,&a);
    if (a*a+b*b==c*c){printf("RIGHT");}
    else if(a*a+b*b<c*c){printf("OBTUSE");}
    else if(a*a+b*b>c*c){printf("ACUTE");}
    else {printf("INVALID");}
    return 0; }