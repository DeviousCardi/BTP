#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p=(a*a + b*b) -c*c;
    if(p>0)
    printf("ACUTE");
    else if(p=0)
    printf("RIGHT");
    else if(p<0)
    printf("OBTUSE");
    else
    printf("INVALID");
    return 0; }