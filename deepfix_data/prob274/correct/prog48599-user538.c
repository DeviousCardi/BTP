#include <stdio.h>
int main(){
    int i,j,n,num[100],time1=0,time2=0;
    scanf("%d\n",&n); {
    for(i=0;i<n;i++)scanf("%d",&num[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++)
        if(num[j]==num[i])
        time1=i+j; }
    printf("%d",time1);
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++)
        if(num[j]==num[i])
        time2=i-j; }
    printf("%d",time2);
    return 0; }