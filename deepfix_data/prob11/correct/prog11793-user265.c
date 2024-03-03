#include <stdio.h>
int checksum(int array[],int sum, int n) {
    int i;
    for(i=0;i<n;i++) {
        if(array[i]==sum) {
            printf("YES"); } }
    return 0; }
int main() {
int N,s,i;
scanf("%d %d\n",&N,&s);
int a[N];
for(i=0;i<N;i++) {
    scanf("%d ",&a[i]); }
checksum(a,s,N);
    return 0; }