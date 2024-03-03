#include <stdio.h>
int main() {
    int i,n;
int N1,N2;
scanf("%d%d",&N1,&N2);
int A1[N1],A2[N2];
for (i=0;i<N2;i++)
{for (n=0;n<N1;n++){
    if (A2[i]==A1[n]){A2[i+1]==A1[n+1]?continue;printf("NO"); }
	return 0; }