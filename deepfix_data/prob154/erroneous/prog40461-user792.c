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
    if(a==-1&&b==1) {
        area=((abs(a))*(abs(a)*j)+(abs(a)+j)*(abs(a)+j)*j+(abs(a)+2*j)*(abs(a)+2*j)*j
                +(abs(a)+3*j)*(abs(a)+3*j)*j: }
      printf("%0.4lf",area);
	return 0; }