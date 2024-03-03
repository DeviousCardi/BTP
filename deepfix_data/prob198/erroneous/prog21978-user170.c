#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,tmp=0;
    scanf("%d\n",&n);
    int c[n],a[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d",&m)
    int b[m];
    for(i=0;i<m;i++) {
        scanf("%d\n",&b[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i]!=b[j]) {
                c[i]=a[i]; } } }
    printf("%d",c[0]);
	return 0; }