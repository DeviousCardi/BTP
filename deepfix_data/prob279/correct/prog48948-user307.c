#include <stdio.h>
int main() {
    int n;
    int a[30];int b[30];int count=0;int x=0;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++){
        a[i]=i+1; }
    int j=0;
    for(j=0;j<n;j++)
    { scanf("%d",&b[i]);}
    for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    {if (a[i]==b[i]) {
        count=count+1;}
            else
           { break;}}
         if(count==2){
          x=a[i];}
          else break; }
    return 0; }