#include <stdio.h>
int main(){
   int n,count;
   scanf("%d",&n);
   int i,t,j,x,s[i];
   for(i=0;i<=n;i++){
       scanf("%d",&x);
    s[i]=x; }
   for(i=0;i<=n;i++){
       for(j=1,count=0;j<=n;j++){
           count=count+1;
           if(s[i]==s[j]){
               break; }
           else if(i==n){
               printf("%d ",count);
               return 0; } }
       printf("%d ",count);
       return 0; }
   for(i=n;i>=0;i--){
       for(j=n-1;j>=0;j--){
           count=count+1;
           if(s[i]==s[j]){
               break; }
           else if(i==0){
               printf("%d",count);
               return 0; } }
       printf("%d",count);
       return 0; }
    return 0; }