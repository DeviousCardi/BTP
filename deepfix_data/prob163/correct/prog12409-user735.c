#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[500], b[500], c[501];
    int i, j, n, m, k=0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0; i<501; i++)
     c[i]='0';
    for(i=0; i<n; i++)
     scanf("%c", &a[i]);
    for(i=n; i<m; i++)
     scanf("%c", &b[i]);
    if(n<=m)
    { j=n;
      i=m; }
    else
    { j=m;
      i=n; }
    while(j)
    { printf("8");
      if(b[j]+(a[i]-'0')>'9')
      { c[k]+='0'+('9'-(b[j]+(a[i]-'0')));
        printf("%c*", c[k]);
        c[k+1]='1';
        j--;
        i--;
        k++; }
      else
      { c[k]=b[j]+(a[i]-'0');
        j--;
        i--;
        k++; } }
    for(i=0; i<k; i++)
    printf("%c", c[i]);
	return 0; }