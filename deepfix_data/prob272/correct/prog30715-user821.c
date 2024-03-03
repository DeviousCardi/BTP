#include <stdio.h>
int main(){
    int i, a1, a2, n , Tn1, Tn2;
    int n1=n-1;
    int n2=n-2;
    int Tn=Tn1+Tn2-2;
     scanf("%d%d%d",&a1,&a2,&n);
     for(i=1;i<=n;i=i+1) {
         if(n==1)
         Tn=1;
         if(n==2)
         Tn=a2;
         if(n>2)
         Tn=a1+a2-2;
         a1=a2;
         a2=Tn; }
     return 0; }