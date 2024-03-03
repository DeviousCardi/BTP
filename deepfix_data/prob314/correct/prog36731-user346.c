#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,num[20],n=0;
    for(i=0;i<20;i++) {
        scanf("%d\n",&num[i]);
        n=n+1; }
    for(i=0;i<n;i++) {
        printf("%d\n",num[i]); }
	return 0; }