#include<stdio.h>
int main() {
    int i,n,a[20],max=0,cnt=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;) {
        if(a[i]<a[i+1]) {
            i++;  cnt++;
            max=cnt; }
        else {
            i++; cnt=0; } }
    printf("%d",cnt);
    return 0; }