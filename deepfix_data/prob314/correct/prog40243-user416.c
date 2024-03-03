#include <stdio.h>
#include <stdlib.h>
int main() {
      int a[20];
      int i;
      scanf("\n%d",&a[20]);
      for(i=1;i<=20;i++)
      scanf("%d",&a[i]); {
          if(a[i]<a[i+1]&&a[i]<a[i-1])
          printf("Yes");
          else
          printf("No"); }
	return 0; }