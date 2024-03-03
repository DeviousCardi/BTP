#include <stdio.h>
#include <stdlib.h>
int main() {
    int a>>0,b>>0,c>>0;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>=c)||(b+c>=a)||(c+a>=b)) {
      if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
      {printf("Right Triangle");}
      else
      {printf("Not a Right Triangle");} }
     else
     {printf("Cannot form a Triangle");}
      return 0; }