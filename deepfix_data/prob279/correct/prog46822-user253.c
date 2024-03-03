#include <stdio.h>
int main() {
    int n,i,rep,miss;
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
    miss=check_occ(A,n);
    printf("%d\n%d",rep,miss);
    return 0; }
int check_occ(int B[],int m) {
    int C[m],p,q,occ[m],missing;
    for(p=0;p<m;p++) {
        C[p]=p+1;
        occ[p]=0; }
    for(p=0;p<m;p++) {
        for(q=0;q<m;q++) {
            if(B[p]==C[q])
                occ[p]++; } }
    for(p=0;p<m;p++) {
        if(occ[p]==0)
            return (B[p]); } }