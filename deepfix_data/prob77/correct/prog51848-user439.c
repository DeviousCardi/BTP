#include <stdio.h>
int main() {
    int n=0;
    scanf("%d",&n);
    int a[n];
    int i,j,x,y=0;
    for (i=0;i<n;i++) {
        scanf("%d",a[i]); }
    int max = a[0];
    for (i=0;i<n;i++) {
        if (a[i]> max) {
            max=a[i]; } }
    for (i=0;i<n;i++) {
        if (a[i]== max) {
            x=i;
            break; } }
    int min = a[0];
    for (i=0;i<n;i++) {
        if (a[i]< min) {
            min = a[i]; } }
    for(i=0;i<n;i++) {
        if(a[i]==min) {
            y=i;
            break; } }
    int t=0;
    t=a[x];
    a[x]=a[y];
    a[y]=t;
    for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    printf("end");
    return 0; }