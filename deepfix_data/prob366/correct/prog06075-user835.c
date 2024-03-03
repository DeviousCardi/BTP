#include <stdio.h>
int sort(int ar[],int n) {
    int temp;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(ar[i]>ar[j]) {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp; }
            else {
                continue; } } }
    return ar[n-1]; }
int main() {
    int num1,i,j,ar1[1000],ar[1000],h;
    int k=0;
    int sum=0;
    scanf("%d\n",&num1);
    for(i=0;i<2*num1;i++) {
        scanf("%d ",&ar[i]); }
    for(i=0;i<2*num1;i++) {
        for(j=i+1;j<2*num1;j++) {
            if(ar[i]==ar[j]) {
                ar1[k]=j-i;
                sum=sum+1;
                k++; }
            else {
                continue; } } }
    h=sort(ar1,sum);
    printf("%d",h);
    return 0; }