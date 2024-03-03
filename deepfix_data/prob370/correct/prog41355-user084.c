#include<stdio.h>
int main()
{int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b<c)||(b+c<a)||(a+c<b))
    printf("INVALID");
    else{
    if((a*a+b*b-c*c<0)||(a*a+c*c-b*b<0)||(b*b+c*c-a*a<0))
    printf("OBTUSE");
    else if((a*a+b*b-c*c==0)||(a*a+c*c-b*b==0)||(b*b+c*c-a*a==0))
    printf("RIGHT");
    else
    printf("ACUTE"); }
    return 0; }