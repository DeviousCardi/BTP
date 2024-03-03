#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int ar[n];
    int max(int ar[],int i,int l);
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    int j,temp;
    int maxfrom[n];
    for(i=0;i<n;i++) {
        maxfrom[i]=max(ar,i,n);
        printf("%d ",maxfrom[i]); }
    return 0; }
int max(int ar[],int i,int l) {
    int j,t=ar[i],count=1;
    for(j=i;j<l-1;j++) {
        if(ar[j+1]>t) {
            count++;
            t=ar[j+1]; } }
    return count; }