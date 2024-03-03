#include <stdio.h>
int main(){
    int n,i,book[99],order[99];
    scanf("%d",n);
    for(i=0;i<100;i++)
     scanf("%d",book[i]);
    for(i=0;i<100;i++)
     scanf("%d",order[i]);
    for(i=0;i<100;i++) {
       int j=order[i];
       int c=book[j];
       book[j]=book[i];
       book[i]=c; }
    for(i=0;i<100;i++) {
       printf("%d",book[i]); }
    printf("end");
    return 0; }