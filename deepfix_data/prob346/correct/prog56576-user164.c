#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int test[n];
    int num,i,cnt,dnt;
    int srt[100];
    int count;
    for(num=0;num<100;num++) {
        count=0;
        for(i=0;i<n;i++) {
           if(test[i]==num) {
               count=count+1; } }
       srt[cnt]=count;
       cnt++; }
    for(dnt=0;dnt<99;dnt++)
    printf("%d",srt[dnt]); }