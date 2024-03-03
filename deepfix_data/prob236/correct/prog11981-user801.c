#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&n);
    int b[n];
    int p[n];
    for(a=0;a<n;a++) {
        scanf("%d",b[a]);
        scanf("%d",p[a]); }
    int i,j;
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if (p[i]==j)
            printf("%d",b[i]); } }
    printf("end");
    return 0; }