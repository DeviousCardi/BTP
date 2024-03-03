#include <stdio.h>
#include <stdlib.h>
double f1(double i){
    return 1; }
double f2(double i){
    return i*i; }
double f3(double i){
    return i*i*i; }
int main() {
  double left,right,interval,area;
  int num,i;
  scanf("%lf",&left);
  scanf("%lf",&left);
  scanf("%d",&num);
  interval=(right-left)/n;
  for(i=0;i<n;i++) {
      if(left<-1)
        area=area+f1(left)*interval;
    else if(left<1)
        area=area+f2(left)*interval;
    else if(left>=1)
        area=area+f3(left)*interval;
    left+=interval; }
printf("%lf",area)
	return 0; }