#include <stdio.h>
int main(){
    int i,j,count=0,k,n,list[1000],b[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&list[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
         if(list[j]==list[i])
         count++;
         b[i]=count; } }
    for(i=0;i<n;i++) {
        if(b[i]!=0 && b[k-i]!=0) {
            printf("lucky");
            break; }
        printf("lucky"); }
return 0; }