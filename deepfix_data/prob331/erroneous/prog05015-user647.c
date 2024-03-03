#include <stdio.h>
int main(){
 int n,i,j,r;
 int num=0;
 char d=n;
 scanf("%d/n",&n);
 for(i=1;i<=n;i++){
     count=0;
     for(j=1;j<=n;j++){
         scanf("%d",&r);
         count=count+1;
         if(count==i){
           if(d!=1)
             break;}
        else if(count!=i){
            if(d!=0)
            break; } }
        num=num+1;
        scanf("\n"); }
 if(num==n)
 printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n,);
 else printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n,);
    return 0; }