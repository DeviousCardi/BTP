#include <stdio.h>
double median(double a, double b, double c){
    if ((a-b)*(a-c)<=0)
    {return a;}
    else if ((b-a)*(b-c)<=0)
    {return b;}
    else if ((c-a)*(c-b)<=0)
    {return c;} }
double  fMarkCalculate (double mMark, double eMark){
    double fMark= (mMark/50.0)*40.0 + (eMark/100.0)*60.0 ;
    return fMark; }
int main(){
    double mA,mB,mC;
    double eA, eB, eC;
    scanf("%lf", &mA);
    scanf("%lf", &mB);
    scanf("%lf", &mC);
    scanf("%lf", &eA);
    scanf("%lf", &eB);
    scanf("%lf", &eC);
    double fA= fMarkCalculate (mA, eA);
    double fB= fMarkCalculate (mB, eB);
    double fC= fMarkCalculate (mC, eC);
    double med= median (fA, fB, fC);
    printf("Median weighted score = %lf", med);
    return 0; }