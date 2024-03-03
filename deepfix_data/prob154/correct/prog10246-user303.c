#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,sum=0;
    int n,y,i;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    for(i=1;i<n;i++){
        y=a+((b-a)/n)*i;
        scanf("%d",&y);
        if(y<=-1)
        sum=sum+1*(b-a)/n;
        if((y>-1)&&(y<1))
        sum=sum+y*y*(b-a)/n;
        if(y>=1)
        sum=sum+y*y*y*(b-a)/n; }
        printf("%.4lf",sum);
	return 0; }