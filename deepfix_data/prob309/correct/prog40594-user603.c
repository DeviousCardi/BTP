#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int A[n],occ[500000];
    for(int i=0;i<500000;i++)
    occ[i]=0;
    scanf("%d",&A[0]);
    occ[A[0]]++;
    for(int i=1;i<n;i++) {
        scanf(",%d",&A[i]);
        occ[A[i]]++; }
    for(int i=0;i<n;i++) {
        if(A[i]!=occ[A[i]]) {
            printf("NO");
            return 0; } }
    printf("YES");
    return 0; }