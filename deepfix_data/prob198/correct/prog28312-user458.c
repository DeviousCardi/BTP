#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2, i,j,a[n1],c[n2],t;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++){
        scanf("%d\n",&a[i]); }
     scanf("%d\n",&n2);
    for(i=0;i<n2;i++){
        scanf("%d\n",&c[i]); }
   for(i=0;i<n1;i++){
       for(j=0;j<n1;j++){
           if(a[i]>a[j]){
               t=a[i];
               a[i]=a[j];
               a[j]=t; } }
       printf("%d",a[i]); }
   for(i=0;i<n1;i++){
       for(j=0;j<n2;j++){
           if(a[i]==c[j]){
               return (0); } } }
   printf("NO");
	return 0; }