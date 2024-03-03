#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n,i,j;
    double a,b,s1,s2,s,x;
    scanf("%lf%lf%d",&a,&b,&n);
       s1=abs(2*x*x*x-8*x);
       for(i=1;i<n;i++) {
      for(j=1;j>i-2;j++)
      s=s+(b-a)/i*s1; {
      if(a==-2&&b==0)
      printf("s1\n");
      else
      printf("s2\n");}
     s=abs(s1)+abs(s2);
    printf("%.4lf",s); }
    return 0; }