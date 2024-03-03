#include <stdio.h>
int main() {
int d,N,e=0;
scanf("%d%d",&d,&N);
int b[d];
for(int i=0;i<d;i++)scanf("%d",&b[i]);
if(N<d)printf("%d",b[N]);
else {
    for(int k=0;k<d;k++)
{if(N<(k+d)
   { e=e+(N-d+k+1)*(N-d+k+2)/2*b[k];}
else e=0; } }
  printf("%d",e); }
	return 0; }