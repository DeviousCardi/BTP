#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int sum, u,v;
    scanf("%d",&sum);
    for(j=0;j<(n/2);j++) {
        u=a[j];   printf("%d",u);
        for(k=(j+1);k<n;k++) {
            if(k==j) continue;
            v=a[k];
            if((u+v)==sum) {
                printf("(%d,%d)",u,v);
                break; } }
        printf("\n"); }
	return 0; }