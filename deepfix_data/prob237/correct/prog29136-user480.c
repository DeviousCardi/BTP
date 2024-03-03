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
    int n,i,count[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("%d ",count[i]);}
    return 0; }