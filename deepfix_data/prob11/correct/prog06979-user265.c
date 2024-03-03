#include <stdio.h>
int checksum(int array[],int sum, int n) {
    if(n==0) {
        return 0; }
    int i,summ=0;
    for(i=0;i<n;i++) {
        summ=summ+array[i]; }
        if(summ==sum) {
            printf("YES"); }
        return checksum(array,sum,n-1); }
int main() {
int N,s,i,j;
scanf("%d %d\n",&N,&s);
int a[N];
for(i=0;i<N;i++) {
    scanf("%d ",&a[i]); }
checksum(a,s,N);
    return 0; }