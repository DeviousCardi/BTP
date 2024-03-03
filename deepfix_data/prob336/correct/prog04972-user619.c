#include <stdio.h>
#include <stdlib.h>
int main() {int a,b,c,d;
            scanf("%d%d%d",&a,&b,&c);
            if(a<=b)
            { d=a;
              a=b;
              b=d; }
            if(a<=c)
                {   d=a;
                    a=c;
                    c=d; }
            if(a>=b+c)
                printf("Cannot form a Triangle");
            else if(b*b+c*c-a*a>0)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle");
	return 0; }