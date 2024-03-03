#include<stdio.h>
int asc(int a[],int n) {
    int maxtill[n];
    int i,j,max;
    int flag;
    for(i=0;i<n;i++)
        maxtill[i]=0;
    for(i=1;i<n;i++) {
        max=0;
        flag=0;
        for(j=i-1;j>=0;j--)
            if(a[i]>a[j] && max<=maxtill[j]) {
                   max=maxtill[j];
                   flag=1; }
        if(flag)
            maxtill[i]=1+max; }
    max=0;
    for(i=1;i<n;i++)
        if(max<maxtill[i])
            max=maxtill[i];
    return max+1; }
int main() {
    int n;
    int i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("%d",asc(A,n));
    return 0; }