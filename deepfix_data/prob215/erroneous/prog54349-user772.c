#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,sum;
    scanf("%d",&N);
    for (i=1;i<N/2;i++) {
        if (N%i==0)
            sum=sum+i
        else
            continue; }
    if (N==sum)
        printf("Yes");
    else
        printf("No");
	return 0; }