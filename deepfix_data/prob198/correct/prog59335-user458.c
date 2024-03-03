#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2, i,j,a[n1],c[n2],b[n1],t,count=0;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++){
        scanf("%d\n",&a[i]); }
     scanf("%d\n",&n2);
    for(i=0;i<n2;i++){
        scanf("%d\n",&c[i]); }
   for (i=0;i<n1;i++){
       for(j=i+1;j<n1;j++){
           if(a[i]>a[j]){
               count =count+1; } }
       b[count]=a[i];
       count=0;
       printf("%d",b[count]); } }