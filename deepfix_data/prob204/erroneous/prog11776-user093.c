#include <stdio.h>
#include <stdlib.h>
int main()
{   int n,i,d,r,temp;
    scanf("%d";n);
    r=n;
    while(r!=0)
    { temp=r%10;
      r=r/10;
      d=d+temp*10*i;
      temp=r;
      i+10; }
    if(d==n)
    printf("YES");
    else
    printf("NO");
	return 0; }