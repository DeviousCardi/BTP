#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,count;
	int a[100];
	count=0;
    for(count=0;count<100;) {
        for(i=0;i<100;i++) {
            scanf("%d",&a[i]);
            count++; } }
    printf("%d",count);
	return 0; }