#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        if(a<c)
        {t=a;
         a=c;
         c=t; } }
    else {
        if(b>c)
        {t=a;
         a=b;
         b=t; }
        else
        {t=a;
         a=c;
         c=t; } }
    if(a>=(b+c))
      printf("Cannot form a Triangle");
    else if(a*a==(b*b+c*c))
      printf("Right Triangle");
    else
      printf("Not Right Triangle");
	return 0; }