#include <stdio.h>
int main(){
   int x,y,z,sum,pro;
   float av;
   scanf("%d %d %d",&x,&y, &z);
   sum=x+y+z;
   pro=x*y*z;
   av=(x+y+z)/3.0;
   printf("%d",sum);
printf("%d",pro);
printf("%.3f",av);
	return 0; }