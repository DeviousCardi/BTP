#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[500], b[500], c[501];
    int i, j, n, m;
    for(i=0; i<500; i++)
    { a[i]='0';
      b[i]='0'; }
    scanf("%d", n);
    scanf("%d", m);
    for(i=0; i<n; i++)
     scanf("%c", a[i]);
    for(i=0; i<m; i++)
     scanf("%c", b[i]);
    if(n>m)
     j=n;
    else
     j=m;
    for(i=0; i<j; i++)
    { if(a[i]+b[i]>'9')
      { c[i]=(a[i]+b[i])%10+c[i];
        c[i+1]+=1; }
      else
       c[i]=a[i]+b[i]; }
    for(i=0; i<j; i++)
     printf("%c", c[i]);
	return 0; }