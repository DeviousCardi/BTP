#include <stdio.h>
#include <stdlib.h>
int main() {
int i,;
int n;
int sum =0;
scanf("%d",&n);
if ((i<=1) || (i>= pow(10,8))
{printf( no output)};
else
 {for (i=1;i<=n ;i++)
 {  if ( n%i == 0 )
     {sum = sum + i}
      else continue ;
     printf("%d",sum);
 }}
  	return 0;