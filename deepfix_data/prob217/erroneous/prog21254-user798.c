#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k;
    double n,s;
    int a[n];
    scanf("%lf",&n);
    for(i=0;i<n;i++) {
      scanf("%d",&a[i])  ; }
    scanf("lf",&s);
    for(j=0;j<n;j++) {
        for(k=0;k<n;k++) {
            if(a[j]+a[k]==s) {
                printf("(%lf,%lf)",a[j],a[k]) } } }
	return 0; }