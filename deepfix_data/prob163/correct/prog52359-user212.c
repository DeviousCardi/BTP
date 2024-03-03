#include <stdio.h>
#include <stdlib.h>
int main() { int a,b,i,r;
            scanf ("%d\n%d\n",&a,&b);
            if (a>b) {r=a;}
            else {r=b;}
            int s[r];
            char c[a],e[a],f[b],d[b];
             scanf("%s",c);
             scanf ("%s",d);
             for (i=0;i<a;i++) {
                 e[a-1-i]= c[i]; }
            for (i=0;i<b;i++) {
                 f[b-1-i]= d[i]; }
           for (i=0;i<r;i++)
           { s[i]= (int)(e[i]+f[i]-'0'-48);
               printf ("%d",s[i]); }
	return 0; }