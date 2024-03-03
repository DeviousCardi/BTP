#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (((a-b)*(a-b)>(c*c)) ||((a-b)*(a-c)>(b*b)) ||((b-c)*(b-c)>(a*a)))
    printf("INVALID");
    else
    {if(a*a+b*b==c*c)
    printf("RIGHT"); }
    return 0; }