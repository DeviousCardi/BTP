#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,a=0;
    for(i=l;i<(l+r);i++){
        for(j=(i+1);j<l+r;j++){
            if ((arr[i])>(arr[j]))
            a++; } }
    return a; }
int main(){
    int i,k,n,d[10000];
    scanf("%d/n%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n-k+1;i++) {
       d[i] = getInversions(i,i+k-1); }
    int max = 0;
    for(i=1;i<n-k+1;i++){
        if (d[i] > d[max])
        max = i; }
    printf("%d",d[max]);
    return 0; }