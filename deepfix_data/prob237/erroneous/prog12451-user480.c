#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int c,x,z,y,n;
    y>=l;y<=l+r-1;
    z>=l;z<=l+r-1;
    for(x=0;x<n-r+1;x++) {
        c=0;
        for(y=l;y<l+r-1;y++) {
            for(z=l;z<l+r-1;z++) {
                if(y<z && arr[y]>arr[z]) {
                    c++; } } } } }
int main() {
    int n,i,k,max;
    int getInversions
    scanf("%d %d",&n,&k);
    int count[n];
    max=0;
    for(i=0;i<n;i++) {
        getInversions(int i,int k);
        count[i]=c;
        if(count[i]>max) {
            max=count[i]; } }
    printf("%d",max);
    return 0; }