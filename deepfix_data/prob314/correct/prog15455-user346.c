#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,num[20],n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&num[i]); }
    int t,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&j);
        printf("%d\n",j); }
	return 0; }