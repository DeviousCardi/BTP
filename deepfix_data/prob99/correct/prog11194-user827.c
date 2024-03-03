#include<stdio.h>
int Max(char a[],int n) {
    int i,j,l=0,l1,t;
    for(i=0;i<n;i++) {
        t=a[i];
        l1=0;
        for(j=i;j<n;j++) {
            if(t<a[j]) {
                l1++;
                t=a[j]; } }
        if(l1>l)
            l=l1; }
    return l; }
int main() {
    int size,i,l;
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    l=Max(a,size);
    printf("%d",l);
    return 0; }