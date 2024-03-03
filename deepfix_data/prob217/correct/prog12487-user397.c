#include <stdio.h>
#include <stdlib.h>
int main() {
	int num[100],S;
	int n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&num[i]); }
	scanf("%d",&S);
	printf("\n");
    int j,k;
    for(j=0;j<n;j++) {
        for(k=1;k<n;k++) {
            if(num[j]+num[k]==S)
            printf("(%d,%d)\n",num[j],num[k]);
            else
            k++; } }
    return 0; }