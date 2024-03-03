#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
 scanf("%d",&n);
 char a[2*n];
 for(i=0;i<=2*n-1;i++){
     scanf("%c",&a[i]); }
 for(i=0;i<=2*n-1;i++){
     if(i==1&&a[i]<a[i+2]){
         printf("Yes");break; }
     if(i==2*n-1&&a[i]<a[i-2]){
         printf("Yes"); }
     else{
     if(a[i]<a[i-2]&&a[i]<a[i+2]&&a[i]!='\n'&&a[i]!='\t'){
         printf("Yes");
         break; } } }
 if(i==2*n){
     printf("No"); }
    return 0; }