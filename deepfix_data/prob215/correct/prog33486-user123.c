#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,sum=0;
    if(n>0) {
        for(i=1;i<n;i++) {
            if (n%i==0)
            sum=sum+i;
            else
            continue; }
        if(sum==n)
        printf("YES");
        else
        printf("NO"); }
	return 0; }