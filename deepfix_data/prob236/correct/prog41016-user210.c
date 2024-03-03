#include <stdio.h>
int main(){
     int num[100],i,n,pos[100],secp[100];
     scanf("%d\n",&n);
     for(i=0;i<n;i++) {
         scanf("%d",&num[i]); }
   for(i=0;i<n;i++) {
       scanf("%d",&pos[i]); }
   for(i=0;i<n;i++) {
       secp[(pos[i])]=num[i]; }
    printf("end");
    return 0; }