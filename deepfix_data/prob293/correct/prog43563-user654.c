#include <stdio.h>
#include<math.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if ((a^2+b^2<c^2)||(b^2+c^2<a^2)||(c^2+a^2<b^2))
  printf("obtuse Triangle");
  else
  if ((a^2+b^2>c^2)||(b^2+c^2>a^2)||(c^2+a^2>b^2))
  printf("cannot form a Triangle");
	return 0; }