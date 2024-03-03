#include <stdio.h>
int main(){
    int n,i;
   scanf("%d",&n);
   int books[n],books1[n],pos[n];
   for(i=0;i<n;i++) {
       scanf("%d",&books[i]); }
   for(i=0;i<n;i++) {
       scanf("%d",&pos[i]); }
   count=0;
   while(count<n) {
       for(i=0;i<n;i++) {
           if(pos[i]==count)
           break; }
       books1[count]=book[i];
       count++; }
   for(i=0;i<n;i++)
   printf("%d ",books1[i]);
    printf("end");
    return 0; }