#include <stdio.h>
int main(){
    int i,j,k,n,list[1000],b[500];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&list[i]);
    for(i=0;i<500;i++)
    b[i]=0;
    for(i=0;i<n;i++) {
    b[list[i]]++; }
    for(i=0;i<n;i++) {
        if(b[list[i]]!=0 && b[list[k-i]]!=0) {
         printf("lucky");
         break; }
        else {
         printf("unlucky");
         break; } }
return 0; }