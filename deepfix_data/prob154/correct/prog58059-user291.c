#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    double dx=(b-a)/n;
    double sum=0;
    for(i=0;i<n;i++) {
        if((a+dx*i<(-1))&&(a+dx*(i+1)<=(-1)))
        sum= sum + dx;
        else if((a+dx*i)>(-1))
        sum =sum + dx*(a+dx*i)*(a+dx*i);
        else
        sum=sum + dx*(a+dx*i)*(a+dx*i)*(a+dx*i); }
    printf("%lf",sum);
	return 0; }