#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a <= b) {
        if(a <= c)
        {if(b<c)
            {printf("%d\n",b);}
            else if(b==c)
            printf("%d",a);
            else
            {printf("%d\n",c);} }
        else
        {printf("%d\n",c) ;} }
    else if(b <= c)
        {if(a<= c)
            {printf("%d\n",b);}
        else
            {printf("%d\n",c); } }
    else
    {printf("%d\n",b); }
	return 0; }