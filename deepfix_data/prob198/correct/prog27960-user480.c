#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,a[20],b[20],i,j,c,x,t;
    c=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(j=0;j<n2;j++) {
        scanf("%d",&b[j]); }
    for(i=0;i<n1;i++) {
        for(x=i;x<n1;x++) {
            if (a[i]>a[x]) {
                t=a[i];
                a[i]=a[x];
                a[x]=t; } } }
    for(i=0;i<n1;i++) {
        c=0;
        for(j=0;j<n2;j++) {
            if(a[i]!=b[j]) {
                c++;
                if(c==n2) {
                    printf("%d",a[i]);break; } } } }
    return 0; }