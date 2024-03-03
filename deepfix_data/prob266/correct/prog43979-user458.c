#include <stdio.h>
int main(){
 int n,j,i,sum=0;
 scanf("%d",&n);
 sum=n%10+(n/10)%10+((n/10)/10)%10+n/1000;
 for(j=n;j>=n;j++){
     while(j%sum==0){
         printf("%d",j);
         exit(0); } }
    return 0; }