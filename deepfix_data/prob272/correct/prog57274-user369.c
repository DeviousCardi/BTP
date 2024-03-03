#include <stdio.h>
int main() {
    int a1,a2,tn,n,tn1,tn2,t;
    scanf("%d",&a1);
    scanf("%d",&a2);
    if(n==a1)
    printf("%d",a1);
    else if(n==a2)
    printf("%d",a2);
    else {
     tn1=a2;
     tn2=a1;
       for(int i=3;i<=n;i++) {
        tn=tn1+tn2-2;
        t=tn1;
        tn1=tn;
        tn2=t; }
      printf("%d",tn); }
    return 0; }