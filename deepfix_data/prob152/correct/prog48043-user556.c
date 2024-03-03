#include <stdio.h>
int n;
int groups(int a,int b,int i)
{int c;
    if(i==n) {
      if(a==b) {
      return 1;}
      else
      return 0; }
     scanf("%d",&c);
     ++i;
     return groups(a+c,b,i)||groups(a,b+c,i); }
int main() {
    int a,b;
    scanf("%d",&n);
   if(n<=1)
   {printf("NO");
    return 0; }
    int y=groups(0,0,0);
    if(y==1)
    printf("YES");
    else
   printf("NO");
    return 0; }