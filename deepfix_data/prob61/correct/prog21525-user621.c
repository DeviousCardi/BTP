#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int input[n],count[k];
    for(int i=0;i<n;i++)
        scanf("%d",&input[i]);
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<k;i++)
        printf("%d ",count[i]); }