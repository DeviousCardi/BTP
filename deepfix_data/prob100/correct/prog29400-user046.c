#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d%d\n",&n,&m);
    int arr[m];int k;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            int q;
            scanf("%d",&q);
            if(j==0)
            k=q;
            if(k<q)
            k=q; }
        arr[i]=k;
        scanf("\n"); }
    int sm=arr[0];
    for(int i=0;i<m;i++) {
        if(sm>arr[i])
        sm=arr[i]; }
    printf("%d",sm);
    return 0; }