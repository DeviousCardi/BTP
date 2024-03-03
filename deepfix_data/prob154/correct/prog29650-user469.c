#include <stdio.h>
#include <stdlib.h>
double fun(doubley);
int main() {
    double X[10],a,b,h,d,result,sum;
    int k,i;
    scanf("%lf %lf %d",&a,&b,&k);
    h=(b-a)/k;
    a=X[0];
    b=X[k];
    for(i=1;i<=k;i++){
        X[i]=X[i-1]+h;printf("%lf",X[i]); }
    for(i=0;i<k;i++)
    {d=fun(X[i]);
    result=d*h;
    sum=result+sum;}
    printf("%.4lf",sum);
	return 0; }
double fun(doubley){
    double y,d;
    if(y<=-1)
    d=1;
    else if((y>-1)||(y<1))
    d=y*y;
    else if(y>=1)
    d=y*y*y;
    return(d);}