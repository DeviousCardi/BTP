#include <stdio.h>
#include <stdlib.h>
int main() { int a,b,c,d,e,f;
            scanf("%d%d%d",&a,&b,&c);
            if(a>=b)
            {if (a>=c) {d=a; e=b; f=c;}
             else {d=c; e=a; f=b;} }
            else {
                if (b>=c) {d=b; e=a; f=c;}
                else {d=c; e=a; f=b;} }
            if (d>=e+f)
            {printf("Cannot form a triangle");}
	return 0; }