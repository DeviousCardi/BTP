#include <stdio.h>
#include <stdlib.h>
int main() {int a,b,c;
            scanf("%d%d%d", &a,&b,&c);
             if ((a+b-c)>0 && (b+c-a)>0 && (a+c-b)>0 ){ if ((a*a)==(b*b+c*c)|| (b*b)==(c*c+a*a)||(c*c)==(a*a+b*b))
                    {printf("Right Triangle");}
	            else {
	                printf("Not Right Triangle"); } }
            else {printf("Cannot form a Triangle");}
	          return 0; }