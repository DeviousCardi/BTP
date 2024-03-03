#include <stdio.h>
#include <stdlib.h>
int main() {
   int n;
    int i,j;
    scanf("%d",&n);
    double a[n],s;
    for(i=0;i<n;i++) {
        scanf("%lf",&a[i]); }
    scanf("%lf",&s);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==s)
            printf("(%lf.0,%lf.0)",a[i],a[j]); } }
	return 0; }