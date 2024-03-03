#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a <= b) {
        if(a <= c)
        {if(b<=c)
            {printf("%d %d %d\n",b);}
            else
            {printf("%d %d %d\n",c);} }
        else
        {printf("%d %d %d\n",a) ;} }
    else if(b <= c)
        {if(a<= c)
            {printf("%d %d %d\n",a);}
        else
            {printf("%d %d %d\n",c); } }
    else
    {printf("%d %d %d\n",b); }
	return 0; }