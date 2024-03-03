#include <stdio.h>
int main() {
int d,N,a=1,e=0;
scanf("%d%d",&d,&N);
int b[d];
for(int i=0;i<d;i++)scanf("%d",&b[i]);
if(N<d)printf("%d",b[N]);
else {
    for(int j=1;j<=N-d; j++)a=a*2;
    for(int k=0;k<d;k++) {
    e=e+k*b[k]; }
  printf("%d",e); }
	return 0; }