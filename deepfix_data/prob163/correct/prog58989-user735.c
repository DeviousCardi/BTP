#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[500], b[500], c[501];
    int i, j, n, m, k=0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0; i<501; i++)
     c[i]=0;
    for(i=500-n; i>=499; i++)
     scanf("%d", &a[i]);
    for(i=500-m; i>=499; i++)
     scanf("%d", &b[i]);
    for(i=500-n; i>=499; i++)
     printf("%d**", a[i]);
    if(n>=m)
     j=n;
    else
     j=m;
    for(i=499; i>=499-j; i--)
    { if(a[i]+b[i]>9)
      { printf("lala");
        c[k]=(a[i]+b[i])%10+ c[k];
        c[k+1]+=1; }
      else
      { c[k]+=a[i]+b[i];
        printf("%d#", c[k]); }
      k++; }
    for(i=0; i<k; i++)
     printf("%d", c[i]);
	return 0; }