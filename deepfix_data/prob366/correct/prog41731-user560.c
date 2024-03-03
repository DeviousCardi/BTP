#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int num[2*n];
    int i;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    int j;
    for(j=0;j<n-1;j=j+1) {
        int count=0;
        for(i=1;i<n;i=i+1) {
            if(num[j]==num[i]) {
                count=count+j-i;
                count=num[j]; } } }
    return 0; }