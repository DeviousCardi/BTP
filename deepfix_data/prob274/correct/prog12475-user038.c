#include <stdio.h>
int main() {
    int n,i1,i2,i3=0,k=0,counter=0,counter1=0;
    scanf("%d",&n);
    int arr[n];
    for(i1=0;i1<n;i1++) {
        scanf("%d",&arr[i1]); }
    int b[2*n];
    for(i2=0;arr[i2]!=1;i2++) {
        arr[i2]=b[k];
        k++; }
    while(b[i3]!=b[0]) {
        counter++;
        i3++;
        break; }
    while(b[i3]!=b[1]) {
        counter1++;
        i3++;
        break; }
    printf("%d %d",counter,counter1);
    return 0; }