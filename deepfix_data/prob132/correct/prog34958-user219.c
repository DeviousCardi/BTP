#include <stdio.h>
int main() {
    int n,a[n+1];
    int freq[100]={0};
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        freq[a[i]]++;
        if(freq[i]!=0) {
        if(i==freq[i]) {
        printf("Yes"); }
        else {
        printf("No"); } } }
    return 0; }