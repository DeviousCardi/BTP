#include <stdio.h>
int main() {
    int n, max,min,maxind,minind;
    int a[100];
    scanf("%d",&a[0]);
    minind=0;
    maxind=0;
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]>max) {
            maxind=i;
            max=a[i]; }
        else if(a[i]<min) {
            minind=i;
            min=a[i]; } }
    a[minind]=max;
    a[maxind]=min;
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }