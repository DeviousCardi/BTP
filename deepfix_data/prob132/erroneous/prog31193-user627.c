#include <stdio.h>
int main() {
    int a[100],i,n,b[100],c=0;
    char u;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        scanf("%c",&ch); }
    for(i=0;i<100;i++) {
        b[i]=0; }
    for(i=0;i<n;i++) {
        b[a[i]]=b[a[i]]+1; }
    for(i=0;i<n;i++) {
        if(b[i]!=0 && b[i]!=i) {
            c=c+1; } }
    if(c==0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }