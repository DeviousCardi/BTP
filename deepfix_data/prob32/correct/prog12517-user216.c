#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
 scanf("%d",&n);
 char a[2*n+2];
 for(i=0;i<=2*n+1;i++){
     scanf("%c",&a[i]); }
 for(i=0;i<=2*n-1;i++){
     if(a[i]<a[i-1]&&a[i]<a[i+1]&&a[i]!='\n'){
         printf("Yes");
         break; } }
 if(i==2*n+2){
     printf("No"); }
    return 0; }