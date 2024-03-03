#include <stdio.h>
#include <stdlib.h>
int space(int a)
{  int k=1;
   char ch=' ';
   for(k=1;k<=a;k++)
    {printf("%ch",ch); }
  return 0; }
int main()
{   int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++)
        { for(j=1;j<=n;j++)
            { if(j>((n+1)/2)-i && j<((n+1)/2)+i)
                printf("*");
              else
                printf(" "); }
        printf("\n"); }
    for(i>(n+1)/2;i<=n;i++)
        { int c=1;
            for(j=1;j<=n;j--)
            { if(j>=2*i-n) {
                printf("*");
                space(c);
                c++; }
                printf(" "); }
        printf("\n"); }
	return 0; }