#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d",&N);
    int i;
    int a[i];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    if(N%2==0)
    printf("%d",a[(N/2)+1]);
    else
    printf("%d",a[(N+1)/2]);
	return 0; }