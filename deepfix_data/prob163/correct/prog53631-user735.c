#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[500], b[500], c[501];
    int i, j, n, m, k=0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0; i<501; i++)
     c[i]=0;
    for(i=0; i<500; i++)
    { a[i]=0;
      b[i]=0; }
    for(i=0; i<n; i++)
     scanf("%d", &a[i]);
    for(i=0; i<m; i++)
     scanf("%d", &b[i]);
    if(n>=m)
     j=n;
    else
     j=m;
     printf("%d@", j);
    for(i=j; i>=0; i--)
    { if(a[i]+b[i]>9)
      { printf("lala");
        c[k]=(a[i]+b[j])%10;
        printf("%d*", c[k]);
        c[k+1]+=1; }
      else
      { c[k]+=a[i]+b[i];
        printf("%d#", c[k]);}
      k++; }
    for(i=0; i<k; i++)
     printf("%d", c[i]);
	return 0; }