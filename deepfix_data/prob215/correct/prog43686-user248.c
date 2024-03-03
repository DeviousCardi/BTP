#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,count=0;
    scanf("%d",&N);
    for(i=1;i<N;i++)
    { if(N%i==0)
      { count=count+i; } }
    if(count==N)
    { printf("YES"); }
    else
    { printf("NO"); }
	return 0; }