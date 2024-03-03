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
    int a[1000],i,j=0,count[1000],n,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    count3(a,count,n,k);
    i=0,j=0;
    while(i>n) {
        if(count[j]==0) {
            continue;
            j++; }
        while(count[j]!=0) {
            a[i]=i;
            i++;
            count[j]--; }
        j++; }
    for(i=0;i<k;i++)
    printf("%d",count[i]);
    return 0; }