#include <stdio.h>
#include <stdlib.h>
int c(int x){
    int sum=0,i;
   if(x==0)
   return 0;
   if(x==1)
   return 1;
   else{
       for(i=1;i<=x;i++){
      sum=sum+c(i-1)*c(x-i);}
      return sum; } }
int main(){
    printf("2");
    int t,i,j,a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        for(j=0;j<100;j++){
        scanf("%d",&a);
        if(c(j)>a){
            printf("%d",c(j));
        break;}
        else{
        continue;} }
    printf("\n"); }
	return 0; }