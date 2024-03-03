#include <stdio.h>
int main() {
    int n,i;
    int num,dnt,count,j;
    scanf("%d",&n);
    int srt[n];
    int arr[100];
    int scnt;
    for(i=0;i<n;i++) {
        scanf("%d",&srt[i]); }
   for(num=0;num<=99;num++) {
        count=0;
        i=0;
        for(dnt=0;dnt<n;dnt++) {
            if(srt[dnt]==num)
            count=count+1; }
        arr[i]=count;
        i++; }
   for(j=99;j>=0;j=j-1) {
       for(scnt=1;scnt<=arr[j];scnt++)
       printf("%d",j); }
    printf("end");
    return 0; }