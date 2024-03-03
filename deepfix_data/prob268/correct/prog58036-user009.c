#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{if(x<0)
return 0;
if(x==0)
return 0;
if(m==1)
    return 1;
if(m==2)
    {if(x==1||x==2)
        return 1;
    if(x==3||x==4||x==5)
        return 2; }
if(m==3)
    {if(x==1||x==2)
        return 1;
    if(x==3||x==4)
        return 2;
    if(x==5)
        return 3; }
return  getways(x-1,3)-getways(x-3,3)-getways(x-5,3)+getways(x-1,2)-getways(x-3,2)+getways(x-1,1); }
int main()
{int n;
scanf("%d",&n);
printf("%d",getways(n,3));
    return 0; }