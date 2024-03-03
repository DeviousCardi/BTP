#include <stdio.h>
int main(){
 int n,i,j,r;
 int num=0;
 int alert=0;
 char d=n;
 scanf("%d/n",&n);
 for(i=1;i<=n;i++){
     int count=0;
     for(j=1;j<=n;j++){
         scanf("%d",&r);
         count=count+1;
         if(count==i){
           if(d!=1){
            alert=0;
             break; } }
        else if(count!=i){
            if(d!=0){
            alert=0;
            break;} } }
     if (alert==0)
     break;
        num=num+1;
        scanf("\\\%c",&d); }
 if(num==n)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }