#include <stdio.h>
#include <stdlib.h>
int main() {int n,j,c=0,count[1000],i,a[1000];
for(i=0;i<1000;i++)
{count[i]=0;}
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {scanf("%d",&a[i]);}
      i=0;
    for(i=0;i<n;i++) {
      for(j=0;j<i;j++) {
          if (a[j]>a[i])
        {count[i]=count[i]+1; } } }
        i=0;
        for(i=0;i<n;i++) {
            c=count[i]+c; }
    printf("%d",c);
    printf("\n");
    i=0;
    for(i=0;i<n;i++)
    printf("%d ",count[i]);
	return 0; }