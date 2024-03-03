#include <stdio.h>
#include <stdlib.h>
int main() {
    double n;
    int i;
    scanf("%lf",&n);
    double a[n],s;
    for(i=0;i<n;i++) {
        scanf("%lf",&a[i]); }
    scanf("%lf",&s);
    for(i=0;i<n;i++) {
        for(J=i+1;j<n;j++) {
            if(a[i]+a[j]==s)
            printf("(%lf,%lf)"a[i],a[j]); } }
	return 0; }