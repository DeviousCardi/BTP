#include <stdio.h>
int main() {
    int n,i,num[100];
    scanf("%d %d %d",&num[0],&num[1],&n);
    for(i=2;i<100;i++) {
        num[i]=num[i-1]+num[i-2]-2; }
    printf("%d",num[n-1]);
    return 0; }