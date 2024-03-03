#include<stdio.h>
int main()
{   int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b)>c*c)
    {printf("ACUTE");}
    else if((a*a+b*b)<c*c)
        {printf("OBTUSE"); }
    else if((a*a+b*b)==c*c)
        {printf("RIGHT"); }
    else{printf("INVALID"); }
    return 0; }