#include <stdio.h>
int main() {
    int n,d;
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    scanf("%d",&d);
    int j;
    for(j=1;j<d;j=j+1) {
    for(i=0;i<n;i=i+1) {
        num[i+1]=num[i];
        num[n-1]=num[0]; } }
    for(i=0;i<n;i=i+1) {
        printf("%d",num[i]); }
    return 0; }