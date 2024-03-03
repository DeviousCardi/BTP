#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,j,b,area;
    int n;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    if(a==b)
    {   area=0;
        printf("%0.4lf",area); }
    if(a<-1&&b<-1) {
        area=abs(b-a);
        printf("%0.4lf",area); }
    if(a==-1&&b==1)
      {   j=(abs(b-a))/n;
        area=a*a*j+(a+j)*(a+j)*j+(a+2*j)*(a+2*j)*j+(a+3*j)*(a+3*j)*j;
          printf("%0.4lf",area); }
	return 0; }