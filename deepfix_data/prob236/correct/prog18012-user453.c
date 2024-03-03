#include <stdio.h>
int main(){
    int n,i,book[99],order[99];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&book[i]);
    for(i=0;i<n;i++)
     scanf("%d",&order[i]);
    for(i=0;i<n;i++) {
       if(order[i]>order[i+1]) {
           int c=order[i+1];
           order[i+1]=order[i];
           order[i]=c; } }
    for(i=0;i<n;i++)
     printf("%d",order[i]);
    for(i=0;i<n;i++) {
       int j=order[i];
       int c=book[j];
       book[j]=book[i];
       book[i]=c;
       printf("%d",book[i]); }
    for(i=0;i<n;i++)
     printf("%d ",book[i]);
    printf("end");
    return 0; }