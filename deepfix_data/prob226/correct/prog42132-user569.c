#include <stdio.h>
void arr(int d,int A[]) {
    int i;
    for(i=0;i<d;i++) {
        scanf("%d",&A[i]); } }
int main() {
    int d,N;
    scanf("%d %d",&d,&N);
    int A[d];
    arr(d,A);
    if(N<=d) printf("%d",A[N]); }