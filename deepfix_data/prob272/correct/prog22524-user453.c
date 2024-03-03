#include <stdio.h>
int main(){
    int a1,a2,n,i;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n==1)
     printf("%d",a1);
    else if(n==2)
     printf("%d",a2);
    else if(n>2) {
         for(i=0;i<n-2;i++) {
              int k=a1+a2-2;
              a1=a2;
              a2=k; }
       printf("%d",a2); }
    else
      printf("invalid value of n");
    return 0; }