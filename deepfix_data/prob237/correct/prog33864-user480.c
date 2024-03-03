#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int z,y,n,count;
    scanf("%d %d",&n,&r);
    for(l=0;l<n;l++) {
        scanf("%d",&arr[l]); }
    int c[n];
    count=0;
    for(l=0;l<l-r+1;l++) {
        for(y=l;y<l+r-1;y++) {
            for(z=l;z<l+r-1;z++) {
                if(y<z && arr[y]>arr[z]) {
                    count++; } } }
        c[l]=count; }
    return 0; }
int main() {
    int n,i,k,max;
    scanf("%d %d",&n,&k);
    int count[n];
    max=0;
    for(i=0;i<n-k+1;i++) {
       count[i]=getInversions(i,k);
        if(count[i]>max) {
            max=count[i]; } }
    printf("%d",max);
    return 0; }