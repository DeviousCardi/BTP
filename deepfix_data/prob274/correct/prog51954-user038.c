#include <stdio.h>
int main(){
    int n,a,i1,i2,i3,k,counter=0;
    scanf("%d",&n);
    int arr[n];
    for(i1=0;i1<n;i1++) {
        scanf("%d",&arr[i1]); }
    int b[n+1];
    b[0]=1;
    for(i2=0;i2<=n;i2++) {
        if(arr[i2]>=1&&arr[i2<=n]) {
        arr[i2]=b[i2+1]; } }
    for(i3=2;;i3++) {
        if(i3>=n) {
            i3=i3%n; }
        if(b[i3]>=1&&b[i3]<=n) {
            if(b[i3]!=b[1]) {
            counter++; }
            else {
                i3=k; } } }
    printf("%d",counter);
    return 0; }