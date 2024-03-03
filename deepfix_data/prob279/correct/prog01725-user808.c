#include <stdio.h>
int main()
{   int i,j,n,p,c;
    c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(a[i]==j){
               c++; }
           if(j!=i && a[i]==a[j]){
               p=a[i]; }
           if(c=0){
               printf("%d \n %d",p,j); } } }
   return 0; }