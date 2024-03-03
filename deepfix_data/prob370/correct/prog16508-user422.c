#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((b<c)&&(a<c)){if (a+b<c){printf("INVALID");}else
    {if(a*a+b*b>c*c){
    printf("ACUTE");
    } else { if(a*a+b*b<c*c) { printf("OBTUSE");}
    else {printf("RIGHT");}
    }}}
    return 0; }