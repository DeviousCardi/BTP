#include <stdio.h>
#include <stdlib.h>
int main() {int n,j,c=0,count[1000],i,a[1000];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {scanf("%d",&a[i]);}
    for(i=0;i<n;i++) {
      for(j=0;j<i;j++)
      {  if (a[j]>a[i])
        {count[i]++;}}
        i=0;
        for(i=0;i<n;i++) {
            c=count[i]+c; } }
    printf("%d",c);
    printf("/n");
    i=0;
    for(i=0;i<n;i++)
    printf("%d",count[i]);
	return 0; }