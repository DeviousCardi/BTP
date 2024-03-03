#include <stdio.h>
int n;
void sort(int A[],int size) {
    int temp;
    for(int i=0;i<size;i++) {
        for(int j=i+1;j<size;j++) {
            if(A[j]<A[i]) {
               temp=A[j];
               A[j]=A[i];
               A[i]=temp; } } } }
int main() {
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n-1;i++) {
        scanf("%d,",&A[i]); }
    scanf("%d",&A[n-1]);
    sort(A,n);
    printf("%d",A[4]);
    return 0; }