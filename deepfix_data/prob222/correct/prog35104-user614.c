#include <stdio.h>
void median(double a, double b, double c){
    if ((a-b)*(a-c)<=0)
    {printf("%.2lf", a);}
    else if ((b-a)*(b-c)<=0)
    {printf("%.2lf", b);}
    else if ((c-a)*(c-b)<=0)
    {printf("%.2lf", c);} }
void fMarkCalculate (){
    double mMark= 20.0;
    double eMark= 60.0;
    double fMark= (mMark/50.0)*40.0 + (eMark/100.0)*60.0 ;
    printf("%.2lf", fMark); }
int main(){
    int a,b;
    scanf("%d", &a);
    scanf("&d", &b);
    printf("%d  %d", a, b);
    return 0; }