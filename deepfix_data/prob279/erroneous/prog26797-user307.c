#include <stdio.h>
int main() {
    int n;
   ;int a[30];int i=0;int c=0;int d=0;
    int j=0;
    for(j=0;j<n;j++)
    { scanf("%d",&a[i]);}
    for(i=1;i<=n;i++){
      int   count=0;
    for(j=0;j<n;j++)
    {if (a[i]==i)
     count=count+1;}
         if(count==2){
    c=i;}
        else if(count==0){
            d=i}
        }}
        printf("T%d\n%d",c,d);
    return 0; }