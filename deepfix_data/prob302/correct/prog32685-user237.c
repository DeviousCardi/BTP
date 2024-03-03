#include <stdio.h>
int main()
{ float a[2],c[2],p[2];
char b='n';
scanf("%f %f\n",&a[0],&a[1]);
scanf("%f %f\n",&c[0],&c[1]);
scanf("%f %f\n",&p[0],&p[1]);
if(a[0]>c[0])
{ if (p[0]>c[0] && p[0]<a[0])
  b='y';
  else if(p[0]==c[0] || p[0]==a[0])
  b='o'; }
else
{ if (p[0]>a[0] && p[0]<c[0])
  b='y';
  else if(p[0]==c[0] || p[0]==a[0])
  b='o'; }
 if(b=='n')
 printf("Point is outside the rectangle.\n");
 else if(b=='y')
  printf("Point is inside the rectangle.\n");
  else
   printf("Point is on the rectangle.\n");
return 0; }