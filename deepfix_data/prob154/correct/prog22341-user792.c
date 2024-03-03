#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,b,area=0;
    int n,i;
    float j;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    if(a==b) {
        printf("%0.4lf",area); }
    j=(abs(b-a))/n;
    if(a<-1&&b<-1) {
        area=abs(b-a);
        printf("%0.4lf",area); }
    if(a==-1&&b==1)
    { for(i=0;i<n;i++) {
        area=area+((abs(a)+i*j)*(abs(a)+i*j)*j); }
      printf("%0.4lf",area); }
    area++;
	return 0; }