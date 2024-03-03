#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,b,area=0;
    int n,i,j;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    if(a==b) {
        printf("%0.4lf",area); }
    j=(abs(b-a))/n;
    if(a<-1&&b<-1) {
        for(i=0;i<n;i++) {
            area=area+j;
            printf("0.4%lf",area);
            area++; } }
	return 0; }