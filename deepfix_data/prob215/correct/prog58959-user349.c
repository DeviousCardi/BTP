#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
int n;
int sum =0;
scanf("%d",&n);
 {for (i=1;i<=n ;i++)
 {  if ( n%i == 0 )
     sum = sum + i ;
      else continue ;
 }}
     if (sum ==n )
     printf("YES");
     else
     printf("NO");
  	return 0; }