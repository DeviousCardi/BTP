#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[500], b[500], c[501];
    int i, j, n, m;
    for(i=0; i<500; i++)
    { a[i]='0';
      b[i]='0'; }
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0; i<n; i++)
     scanf("%d", &a[i]);
    for(i=0; i<m; i++)
     scanf("%d", &b[i]);
    if(n>=m)
     j=n;
    else
     j=m;
    for(i=0; i<j; i++) {
       c[i]=a[i]+b[i]; }
    for(i=0; i<j; i++)
     printf("%d", c[i]);
	return 0; }