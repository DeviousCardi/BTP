#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,sec[15],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&sec[i]); }
    for(i=0;i<n;i++) {
        printf("%d ",sec[i]); }
	return 0; }