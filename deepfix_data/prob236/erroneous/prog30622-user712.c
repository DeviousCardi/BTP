#include <stdio.h>
int main() {
    int i ,n,j;
    int odr[100];
    int bk[100];
    scanf("%d",&n)
    for(i=0;i<n;i++)
    scanf("%d",&bk[i]);
    for(i=0;i<n;i++)
    scanf("%d",&odr[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(odr[j]==i)
            printf("%d",bk[j]); } }
    printf("end");
    return 0; }