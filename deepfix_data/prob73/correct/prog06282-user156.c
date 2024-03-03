#include <stdio.h>
int main() {
    int m,n;
    int i,j;
    int num,sum=0;
    scanf("%d",&n);
    scanf("%d\n",&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
                scanf("%d\t",&num);
                sum=sum+num; }
        printf("%d",sum) ;
        sum=0; }
    return 0; }