#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n-1;i++) {
        scanf("%d ",&A[i]); }
    scanf("%d",&A[n-1]);
    Check_Occ(A,n);
    return 0; }
int Check_Occ(int B[],int m){
    int C[m],occ[m],p,q;
    for(p=0;p<m;p++) {
        C[p]=p+1;
        occ[p]=0; }
    for(p=0;p<m;p++) {
        for(q=0;q<m;q++) {
            if(C[p]==B[q])
                occ[p]++; } }
    for(p=0;p<m;p++) {
        if(occ[p]==2)
            printf("%d\n",C[p]); }
    for(p=0;p<m;p++) {
       if(occ[p]==0)
            printf("%d",C[p]); }
    return 0; }