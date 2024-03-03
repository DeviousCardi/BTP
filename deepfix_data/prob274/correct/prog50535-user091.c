#include <stdio.h>
int main() {
    int n,count=0,i,m=0;
    scanf("%d",&n);
    int room[n];
    int p[n];
    for(i=0;i<n;i++) {
        scanf("%d",&room[i]); }
    for(i=0;i<n;i++) {
        if(room[i]==m) {
            p[i]=room[m]; } }
    for(i=0;i<n;i++) {
        if(p[i]!=room[0]) {
            count++; }
        else if(p[i]==room[0])
        break; }
    printf("%d %d",(count+1),count);
    return 0; }