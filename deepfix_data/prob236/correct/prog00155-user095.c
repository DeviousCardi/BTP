#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int book[n],pos[n];
    int i,c=0,temp;
    for(i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&pos[i]); }
    for(i=0;i<n;i++) {
        if(pos[i]==c) {
            temp=book[c];
            book[c]=book[i];
            book[i]=temp;
            c++; }
        if(i==n && c!=n-1) {
            i=0; } }
    for(i=0;i<n;i++) {
        printf("%d  ",book[i]); }
    printf("end");
    return 0; }