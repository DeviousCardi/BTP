#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
     int h,sumstat=0;
     scanf("%d",&h);
    for(int i=0;i<n;i++) {
       int sum=0;
        for(int j=0;j<h;j++) {
            int val;
            scanf("%d",&val);
            sum+=val; }
        if(sumstat<sum)
    sumstat=sum; }
    printf("%d",sumstat); }