#include <stdio.h>
void median(double a, double b, double c){
    if ((a-b)*(a-c)<=0)
    {printf("%lf", a);}
    else if ((b-a)*(b-c)<=0)
    {printf("%lf", b);}
    else if ((c-a)*(c-b)<=0)
    {printf("%lf", c);} }
int main (){
    double mMark= 20.0;
    double eMark= 60.0;
    double fMark= (mMark/50.0)*40.0 + (eMark/100.0)*60.0 ;
    printf("%lf", fMark);
    return 0; }