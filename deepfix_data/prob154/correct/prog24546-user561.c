#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,i,d,area;
    area=0;
    scanf ("%lf%lf",&a,&b);
    int n;
    scanf ("%d",&n);
    double c;
    c=(b-a)/n;
    if (a<-1 &&b < -1) {
        for (i=0;i<n;i++) {
            d= 1*c;
            area=area+d; }
        printf ("%.4lf",area); }
    if (a<-1 &&b > -1 && b<1) {
        for (i=0;i<n;i++)
        {   if (c*i+a<=-1)
            {d= 1*c;
            area=area+d;}
            else {
             d=(a+(i*c)) *c*(a+(i*c));
            area=area+d; } }
       printf ("%.4lf",area); }
    if (a<-1 &&b < -1) {
        for (i=0;i<n;i++)
        d= 1*c;
        area=area+d; }
    if (a<-1 &&b < -1) {
        for (i=0;i<n;i++)
        d= 1*c;
        area=area+d; }
	return 0; }