#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int test[n],j;
    int num,i,cnt=0,dnt;
    int srt[100];
    int count;
    for(j=0;j<n;j++) {
        scanf("%d",&test[j]); }
    for(num=0;num<100;num++) {
        count=0;
        for(i=0;i<n;i++) {
           if(test[i]==num) {
               count=count+1; } }
       srt[cnt]=count;
       cnt++; }
    for(i=1;i<100;i++) {
        for(j=1;j<=srt[i-1];j++)
        printf("%d ",i); }
    printf("end"); }