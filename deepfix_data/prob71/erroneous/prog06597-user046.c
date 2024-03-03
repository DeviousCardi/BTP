#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int i=0;i<n;i++)
    scanf("%li",&arr[i]);
    for(int i=0;i<n;i++) {
        long int sm=arr[i];int pos=i;
        for(int j=i;j<n;j++) {
            if(sm>arr[j]) {
                sm=arr[j];
                pos=j; } }
        long int temp=arr[i];
        arr[i]=sm;
        arr[pos]=temp; }
    double med;int h=n/2;
    if((n%2)==0) {
        med=(arr[h-1]+arr[h])/(2.0); }
    else {
        printf("%li",arr[h]);
        return 0; }
    long int j=ceil(med);
    if(j==med) {
        long int q=(long int)med;
        printf("%li",q; }
    else
    printf("%.1lf",med);
    return 0; }