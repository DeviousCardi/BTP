#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    scanf("%d",&n);
    int b[n];
    int p[n];
    scanf("%d",b[n]);
    scanf("%d",p[n]);
    int i,j;
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if (p[i]==j)
            printf("%d",b[i]); } }
    printf("end");
    return 0; }