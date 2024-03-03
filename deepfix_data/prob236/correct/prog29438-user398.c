#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int unord[n];
    int ord[n];
    for(int i=0;i<n;i++)
        scanf("%d",&unord[i]);
    for(int j=0;j<n;j++) {
        int pos;
        scanf("%d",&pos);
        ord[pos]=unord[j]; }
    for(int k=0;k<n;k++)
        printf("%d ",ord[k]);
    printf("end");
    return 0; }