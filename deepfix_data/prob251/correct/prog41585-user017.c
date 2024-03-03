#include <stdio.h>
long getways(int x, int m)
{if(x==0) return 1;
    switch(m){
        case 3:return (getways(x-5,x-5>=5?3:2)+getways(x-3,x-3>=3?2:1)+1);
        case 2:return (getways(x-3,x-3>=3?2:1)+1);
        case 1:return 1;}}
int main()
{int n;
scanf("%d",&n);
printf("%ld",getways(n,3));
return 0;}