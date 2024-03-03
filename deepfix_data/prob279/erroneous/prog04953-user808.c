#include <stdio.h>
int main()
{   int i,j,n,p,c;
    c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
   for(i=0;i<n;i++){
       for(j=1;j<=n;j++){
           if(a[i]==j){
               c++; }
          for(k=1;k<n;k++){
           if(k!=i && a[i]==a[k]){
               p=a[i]; } }
               printf("%d \n %d",p,j); }
   return 0; }