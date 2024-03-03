#include <stdio.h>
int main() {
    int n,i,j,rep=0,miss;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    for(i=0;i<n;i++) {
        if(A[i]==i+1)
            continue;
        else {
            rep=i;
            break; } }
    int C[n],occ[n];
    for(i=0;i<n;i++) {
        C[i]=i+1;
        occ[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(A[i]==C[j])
                occ[i]++; } }
    for(i=0;i<n;i++) {
        if(occ[i]==0)
            miss=C[i]; }
    printf("%d\n%d",rep,miss);
    return 0; }
int check_occ(int B[],int m) {
            return (B[p]); } }