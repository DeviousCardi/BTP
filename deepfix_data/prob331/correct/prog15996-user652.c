#include <stdio.h>
int main(){
         int a;
   int n;
   int count=0;
        scanf("%d",&n);
   int i;
   for(i=1;i<n;i++) {
     int j;
         for(j=1;j<n;j++) {
         scanf("%d",&a);
    if(i==j){
        a|=1;
              count=count+1; }
        else{
            a|=0;
            count=count+1;} } }
    if(count==0){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
      else{
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }