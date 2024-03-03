#include <stdio.h>
#include <stdlib.h>
int max_vest(double *a,double *b,double x,double y,double n,double m) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(*(b+j)>(*(a+i)-x)&&*(b+j)<(*(a+i)+y)) {
                k++;*(b+j)=-10;
                break; } } }
    printf("%d",k);
    return 0; }
int main() {
	int k=0,i;
	double a[100000],b[100000];
	double n,m,x,y;
	scanf("%lf %lf %lf %lf\n",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    scanf("%lf ",(a+i)); }
	for(i=0;i<m;i++) {
	    scanf("%lf ",(b+i)); }
	max_vest(a,b,x,y,n,m,k);
	return 0; }