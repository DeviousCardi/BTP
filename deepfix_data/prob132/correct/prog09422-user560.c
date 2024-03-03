#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int num[n];
    int i,j;
    char c;
    int t=0;
    for(i=0;i<2*n-1;i=i+1) {
        scanf("%c",&c);
        if(c>='0'&&c<='9') {
            num[t++]=c; } }
    for(i=0;i<n;i=i+1) {
        printf("%c\n",num[i]); }
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