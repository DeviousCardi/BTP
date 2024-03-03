#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,a=0,b;
    for(i=l;i<(l+r-1);i++){
        for(j=i+1;j<=l+r-1;j++){
            if (arr[i]>arr[j])
            {a = a+1;} } }
    return a; }
int main(){
    int i,k,n,d[10000],max = 0;
    scanf("%d\n%d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<(n-k+1);i++) {
       d[i] = getInversions(i,k); }
    for(i=1;i<n-k+1;i++){
        if (d[i] > d[max])
        max = i; }
    printf("%d",d[max]);
    return 0; }