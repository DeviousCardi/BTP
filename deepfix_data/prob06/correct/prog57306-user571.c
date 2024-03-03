#include <stdio.h>
#include <stdlib.h>
double n,m,x,y;
double equip(double *a,double *b) {
    int i=0,j,start=0,ctr=0;
    for(i=0;i<n;i++) {
        for(j=start;j<m;j++) {
            if((a[i]-x)<=b[j] && b[j]<=(a[i]+y)) {
                start=j;
                ctr++;
                printf("%lf %lf",a[i],b[j]);
                break; } } }
    return ctr; }
int main() {
    double *a,*b;
    scanf("%lf %lf %lf %lf",&n,&m,&x,&y);
    int i=0;
    a=(double *)(malloc(n*sizeof(double)));
    b=(double *)(malloc(m*sizeof(double)));
    for(i=0;i<n;i++) {
        scanf("%lf",&(a[i])); }
    for(i=0;i<m;i++) {
        scanf("%lf",&(b[i])); }
    printf("%lf",equip(a,b));
	return 0; }