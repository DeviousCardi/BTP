#include <stdio.h>
int rot(int a[],int n,int d) {
    int i,j;
    int tmp;
    if(d==0)
        return 0;
    for(i=0;i<n-d;i++)
        for(j=1;j<n;j++) {
            tmp=a[j];
            a[j]=a[j-1];
            a[j-1]=tmp; }
    return 0; }
int main() {
    int n;
    int i;
    int d;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    scanf("%d",&d);
    d=d%n;
    rot(A,n,d);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    return 0; }