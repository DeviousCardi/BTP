#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {for(j=(n+1)/2-i+1;j<=i+(n+1)/2-1;j++)
printf("%d",j);
printf("\n");
}return 0; }