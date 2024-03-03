#include <stdio.h>
int main() {
    int n,i,a[50],j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        j=0;
        for(j!=i;j<n;j++) {
            if(a[i]==a[j]) {
                printf("YES\n"); }
            else {
                printf("NO\n"); } } }
	return 0; }