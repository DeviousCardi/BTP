#include<stdio.h>
int asc(int a[],int n) {
    int maxtill[n];
    int i,j,max;
    for(i=0;i<n;i++)
        maxtill[i]=0;
    for(i=1;i<n;i++) {
        for(j=i-1;j>=0;j--) {
            if(a[i]>a[j]) {
                maxtill[i]=1+maxtill[j];
                break; } } }
    max=1;
    for(i=1;i<n;i++)
        if(max<maxtill[i])
            max=maxtill[i];
    return max; }
int main() {
    int n;
    int i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("%d",asc(A,n));
    return 0; }