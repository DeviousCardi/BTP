#include <stdio.h>
# include<math.h>
#define intT(int );
int main(){
    int a1,a2,n,T;
    scanf("%d %d %d",&a1,&a2,&n);
    int i=0;
    if (n==1){ T=a1;}
    else if (n==2) {T=a2;}
 for (i=3;i<n;i++) {
     T= a2+a1-2;
     a1=a2;
     a2=T; }
    printf("%d",T);
    return 0; }