#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    double a,b,dx,area=0,y,temp,i;
    int n,j;
    scanf("%lf%lf%d",&a,&b,&n);
    double f[n],g[n];
    i=a;
    dx=(b-a)/n;
    for(j=0;j<n;j++) {
        f[i]=-pow(i,2)+3*i;
        g[i]=2*pow(i,3)-pow(i,2)-5*i;
        if(f[i]-g[i]<-0.000001) {
            temp=f[i];
            f[i]=g[i];
            g[i]=temp; }
        else
            if(f[i]-g[i]>-0.000001&&f[i]-g[i]<0.000001)
                f[i]=g[i];
        y=f[i]-g[i];
        area=area+y*dx;
        i=i+dx }
    printf("%.4lf",area);
	return 0; }