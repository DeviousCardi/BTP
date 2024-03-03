#include <stdio.h>
int main() {
    int n;
    scanf("%d,",&n);
    int num[n];
    int i,j;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    for(i=0;i<n;i=i+1) {
        printf("%d\n",num[i]); }
    int sum=0;
    for(i=0;i<n ;i=i+1) {
        int count=0;
        for(j=0;j<n;j++) {
            if(num[i]==num[j]) {
                count=count+1; } }
        sum=sum+count; }
    int sum1=0;
    for(i=0;i<n;i=i+1) {
        sum1=sum1+num[i]; }
    if(sum1==sum) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }