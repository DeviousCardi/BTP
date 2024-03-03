#include <stdio.h>
int main(){
    int n,i,j,b;
    int flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for (j=0;j<n;j++)
        {    int a;
            if(j!=n-1)
            scanf("%d ",&b);
            if(j==n-1)
            scanf("%d\n",&b);
            a=b;
            if (i==j) {
                if(a==1)
                continue;
                else {
                flag=-1;
                break; } }
            else {
                if(a==0)
                continue;
                else {
                    flag=-1;
                    break; } } } }
 if (flag==0)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 else
 printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
  return 0; }