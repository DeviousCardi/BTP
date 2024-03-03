#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
     int h;
     scanf("%d",&h);
    for(int i=0;i<n;i++) {
       int sum=0,sumstat=0;
        for(int j=0;j<h;j++) {
            int val;
            scanf("%d",&val);
            sum+=val; }
        if(sumstat<sum)
    sumstat=sum; }
    printf("%d",sumstat); }