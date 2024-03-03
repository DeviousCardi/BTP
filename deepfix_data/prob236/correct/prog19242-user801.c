#include <stdio.h>
int main(){
    int n;
    int b[n];
    int p[n];
    scanf("%d",&n);
    scanf("%s",b[n]);
    scanf("%s",p[n]);
    int i,j;
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if (p[i]==j)
            printf("%d",b[i]); } }
    printf("end");
    return 0; }