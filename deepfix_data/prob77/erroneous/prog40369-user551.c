#include <stdio.h>
int main() {
    int p,max,min,i,c;
    scanf("%d",&p);
    int a[p];
    scanf("%d",&a[0]);
    max = a[0];
    min = a[0];
    for(i=1;i<p;i++) {
        scanf("%d",&a[i]);
        if(a[i]>a[max]) {
            max = i; }
        if(a[i]<[min]) {
            min = i } }
    c = a[min];
    a[min] = a[max];
    a[max] = c;
    for(i=0;i<p;i++) {
        prinf("%d ",a[i]); }
    printf("end");
    return 0; }