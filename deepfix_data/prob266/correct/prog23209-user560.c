#include <stdio.h>
int main() {
    int num[4];
    int i;
    int sum=0;
    for(i=0;i<4;i=i+1) {
         scanf("%d",&num[i]);
        sum=sum+num[i]; }
    int j;
    for(j=2016; ;j=j+1) {
        if(j%sum==0) {
            printf("%d",j); } }
    return 0; }