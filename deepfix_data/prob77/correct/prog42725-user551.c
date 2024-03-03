#include <stdio.h>
int main() {
    int p,max,min,i,c;
    scanf("%d",&p);
    int a[p];
    scanf("%d",&a[0]);
    max = 0;
    min = 0;
    for(i=1;i<p;i++) {
        scanf("%d",&a[i]);
        if(a[i]>a[max]) {
            max = i; }
        if(a[i]<a[min]) {
            min = i; } }
    c = a[min];
    a[min] = a[max];
    a[max] = c;
    for(i=0;i<p;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }