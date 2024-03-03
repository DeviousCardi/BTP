#include <stdio.h>
int checksum(int array[],int sum, int n) {
    int i,summ=0;
    for(i=0;i<n;i++) {
        summ=summ+array[i]; }
        if(summ==sum) {
            printf("YES"); }
    else {
        return checksum(array,sum,n-1); } }
int main() {
int N,s,i,j;
scanf("%d %d\n",&N,&s);
int a[N];
for(i=0;i<N;i++) {
    scanf("%d ",&a[i]); }
for(j=0;j<N;j++) {
checksum(a,s,N); }
    return 0; }