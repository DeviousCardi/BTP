#include<stdio.h>
int max (int arr[],int size) {
    int i,max=0;
    for(i=0;i<size;i++)
        if(arr[i]<max)
            max=arr[i];
    return max; }
int max1(int a,int b) {
    return (a>b?a:b); }
int main() {
    int n,arr[20],i,j,maxtill[20],max_len=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    maxtill[0]=1;
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
                maxtill[i]=max1(1 + max(maxtill,j),1); }
        if(maxtill[i]>max_len)
            max_len=maxtill[i]; }
    printf("%d",max_len);
    return 0; }