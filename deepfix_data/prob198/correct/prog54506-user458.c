#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2, i,j,t;
    scanf("%d\n",&n1);
    int a[n1],c[n2];
    for(i=0;i<n1;i++){
        scanf("%d\n",&a[i]); }
     scanf("%d\n",&n2);
    for(i=0;i<n2;i++){
        scanf("%d\n",&c[i]); }
   for(i=0;i<n1;i++){
       for(j=0;j<n1;j++){
           if(a[i]<a[j]){
               t=a[i];
               a[i]=a[j];
               a[j]=t; } } }
   for(i=0;i<n1;i++){
       for(j=0;j<n2;j++){
           if(a[i]==c[j]){
               printf("%d",a[i]);
               return (0); } } }
   printf("NO");
	return 0; }