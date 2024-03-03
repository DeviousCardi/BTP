#include <stdio.h>
int main() {
    int n,missing,repeat;
    scanf("%d",&n);
    int arr[n+1],occ[n+1];
    arr[0]=occ[0]=0;
    for(int i=0;i<n;i++)
    occ[i]=0;
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
        occ[arr[i]]++; }
    for(int i=1;i<=n;i++) {
        if(occ[A[i]]==0)
        missing=A[i];
        if(occ[A[i]]==2)
        repeat=A[i]; }
    printf("%d\n%d",repeat,missing);
    return 0; }