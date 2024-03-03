#include <stdio.h>
int main(){
    int n;
    int a[1000],temp,i,j,k,b[1000];
scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    temp=0;
    for(i=0;i<2*n-1;i++) {
       for(j=i+1;j<2*n;j++) {
           if(a[j]==a[i]) {
               if((j-i)<temp) {
                  temp=j-i;
                  printf("%d",temp); } } }
       printf("%d",temp); } }