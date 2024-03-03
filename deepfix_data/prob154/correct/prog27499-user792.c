#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,b,area=0;
    int n,i,j;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    if(a==b) {
        printf("%lf",area); }
    j=(abs(b-a))/n;
    if(a<-1&&b<-1) {
        for(i=0;i<n;i++) {
            area=area+j;
            area++;
            printf("%lf",area); } }
	return 0; }