#include <stdio.h>
#include <stdlib.h>
int main() { int a[500],b[500],c[500],d[500],e[500],f[500],g[500],                          h[500],j[500],k[500];
           int i;
            scanf ("%s",a);
            scanf ("%s",b);
            scanf ("%s",c);
            scanf ("%s",d);
            for (i=0;i<500;i++)
            { e[499-i]=a[i];
              f[499-i]=b[i];
              g[499-i]=c[i];
              h[499-i]=d[i];}
             for (i=0;i<500;i++)
             { j[i]=e[i]+f[i]+g[i]+h[i];
             k[i]= j[i]%10;
             printf ("%d",k[i]);}
	return 0; }