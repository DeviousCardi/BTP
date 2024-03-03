#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k;
    int n,s;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
      scanf("%d",&a[i])  ; }
    scanf("%d",&s);
    for(j=0;j<n;j++) {
        for(k=0;k<n;k++) {
            if(a[j]+a[k]==s) {
                if(a[i]!=a[j]) {
                printf("(%d,%d)",a[j],a[k]); } } } }
	return 0; }