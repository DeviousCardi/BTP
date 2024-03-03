#include <stdio.h>
int main()
{   int h,p;
    scanf("%d\n%d",&h,&p);
    int a,b,i=0,s=0;
    scanf("\n%d",&a);
    while(i<p/2){
        scanf("%d",&b);
        if(a>b)
            s+=(a-b);
        a=b;
        i++; }
    if(s<h)
        printf("Yes");
    else
        printf("No");
    return 0; }