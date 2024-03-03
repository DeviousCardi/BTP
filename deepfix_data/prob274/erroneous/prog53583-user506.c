#include <stdio.h>
int main(){
    int n, i, k, h l;
    scanf("%d", &n);
    int A[n], M[n];
    for(i=1;i<=n;i=i+1) {
    scanf("%d", &A[i]); }
    for(k=1, l=1;;l=l+1) {
    k=A[k];
    M[l]=k;
    for(h=1;h<l;h=h+1) {
        if(k=M[h])
        break; }
    printf("%d",l) }
    return 0; }