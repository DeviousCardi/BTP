#include <stdio.h>
int main() {
int d,N,e=0;
scanf("%d%d",&d,&N);
int b[d];
for(int i=0;i<d;i++)scanf("%d",&b[i]);
if(N<d)printf("%d",b[N]);
else {
    for(int k=d;k<N;k++){
    b[k]=0;
    for(int j=k;j<d+k;j++)b[k]=b[k]+b[j]; }
printf("%d",b[N]);}
	return 0; }