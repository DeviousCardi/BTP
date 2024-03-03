#include <stdio.h>
#include <stdlib.h>
int main() { int a,b,i;
            scanf ("%d\n%d\n",&a,&b);
            char c[a],e[a],f[b], d[b];
             scanf("%s",c);
             scanf ("%s",d);
             for (i=0;i<a;i++) {
                 e[a-1-i]= c[i]; }
            for (i=0;i<b;i++) {
                 f[b-1-i]= d[i]; }
            printf("%s",e);
	return 0; }