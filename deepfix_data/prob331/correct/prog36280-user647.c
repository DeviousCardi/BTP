#include <stdio.h>
int main(){
 int k,i,j,r;
 int num=0;
 int alert=1;
 char d='n';
 scanf("%d/n",&k);
 for(i=1;i<=k;i++){
     int count=0;
     for(j=1;j<=k;j++){
         scanf("%d",&r);
         count=count+1;
         if(count==i){
           if(r!=1){
            alert=0;
             break; } }
        else if(count!=i){
            if(r!=0){
            alert=0;
            break;} } }
     if (alert==0){
     break;}
        num=num+1;
        scanf("\\\%c",&d); }
 if(num==k){
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",k,k); }
 else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",k,k);
    return 0; }