#include <stdio.h>
#include<math.h>
int main(){
    int i,j,n,k=0;
    scanf("%d\n",&n);
    int a[2*n],b[n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i;j<2*n;j++) {
            if(a[i]==a[j] && abs(i-j)!=0) {
                b[k]=abs(i-j);
                k++; }
            else {
                continue; } } }
     int temp=b[0];
    for(i=0;i<n;i++) {
        if(temp>b[i]) {
            temp=b[i]; }
        else {
            continue; } }
    printf("%d",temp);
    return 0; }