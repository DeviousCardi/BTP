#include<stdio.h>
void count3(int a[],int count[],int n,int k) {
    int i=0,j=0;
    for(i=0;i<=k;i++) {
        int count1=0;
        for(j=0;j<n;j++) {
            if(a[j]==i) {
                count1++; } }
        count[i]=count1; } }
int main() {
    int a[1000],i,count[1000],n,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    count3(a,count,n,k);
    printf("%d",count[3]);
    return 0; }