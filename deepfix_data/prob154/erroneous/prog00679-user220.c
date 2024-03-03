#include <stdio.h>
#include <stdlib.h>
double function(double x){
    double y;
    if(x<=-1){
        y=1; }
    else if((x>=-1)&&(x<=1)){
        y=x*x; }
    else{
        y=x*x*x; }
    return y; }
int main() {
    double a,b;int n;
    scanf("%lf %lf\n",&a,&b);
    scanf("%d",&n);
    int i;double c,sum=0.0;
    for(i=0;i<n;i++){
        c=a+((b-a)*i)/n;
        sum=sum+function(c)*(b-a)/n }
    printf("%.4ld\n",sum);
    return 0; }