#include <stdio.h>
int main() {
    int A[100000],n,temp;
    float med;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    scanf("%d ",&A[i]);
    for(int j=0;j<n;j++)
    for(int i=0;i<n-1;i++) {
        if(A[i]>A[i+1]) {
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp; } }
    if(n%2==0) {
        med=(A[n/2-1]+A[n/2]);
        printf("%.1f",med/2); }
    else
    printf("%d",A[(n+1)/2-1]);
    return 0; }