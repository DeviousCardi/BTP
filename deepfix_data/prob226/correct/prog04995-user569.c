#include <stdio.h>
long int recur(int i,int a,int A[a]) {
    long int ret=0;
    if(i<=a) return A[i];
    if(i> a) {
        i=0;
        for(i=0;i<a;i++) {
            ret+=recur(a-i,a,A[a]); }
        return ret; } }
int main() {
    int d,N,i=0;
    scanf("%d %d",&d,&N);
    int arr[d];
    for(i=0;i<d;i++) {
        scanf("%d",&arr[i]); }
    printf("%ld",recur(N,d,arr)); }