#include <stdio.h>
#include <stdlib.h>
int B(int n,int k){
    if(n<k)
     return 0;
    else if(n==0&&k==0)
     return 1;
    else if(k==0)
     return 1;
    else
     return B(n-1,k)+B(n-1,k-1); }
int main(void) {
    int b;
    scanf("%d",&b);
    if(b==0){
       printf("%d %d",0,1);}
    else if(b==1){
       printf("%d %d",0,0);}
    else if(b>1){
      int i,j,n,k;
      for(i=2;i<=20;i++)
       {   for(j=1;j<=20;j++) {
                if(b==B(i,j)){
                  n=i;k=j;
                  printf("%d %d",n,k);
                return 0;} } }
        if(i==21&&j==21){
           printf("%d",-1);} }
    else
    printf("%d",-1);
	return 0; }