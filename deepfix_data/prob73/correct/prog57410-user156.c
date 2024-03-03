#include <stdio.h>
int main() {
    int m,n;
    int i,j;
    int num,sum=0;
    int t=0;
    scanf("%d",&n);
    scanf("%d\n",&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
                scanf("%d\t",&num);
                sum=sum+num; }
        if(sum>t) {
            t=sum; }
        sum=0; }
    printf("%d",t);
    return 0; }