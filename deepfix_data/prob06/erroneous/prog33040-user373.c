#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, x, y, a[100], b[100], i, j, sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d%d",&x,&y);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    for(j=0; j<m; j++ ) {
        scanf("%d", &b[j]); }
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(a[i]==b[j]) }
        sum++; }
	return 0; }