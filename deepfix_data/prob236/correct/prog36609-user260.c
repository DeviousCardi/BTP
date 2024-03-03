#include <stdio.h>
int main() {
    int num[100],pos[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
        scanf("%d",&pos[i]);
    for(j=0;j<n;j++)
        for(i=0;i<n;i++) {
            if(pos[i]==j)
            printf("%d ",num[i]); }
    printf("end");
    return 0; }