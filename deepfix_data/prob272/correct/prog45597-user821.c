#include <stdio.h>
int main(){
    int  a1, a2, n , Tn1, Tn2;
    int n1=n-1;
    int n2=n-2;
    scanf("%d%d%d",&a1,&a2,&n);
    int Tn=Tn1+Tn2-2;
    if(n==1) {
     Tn=a1; }
     if(n==2) {
     Tn=a2; }
     if(n>2) {
       Tn=Tn1+Tn2-2; }
    printf("%d",Tn);
     return 0; }