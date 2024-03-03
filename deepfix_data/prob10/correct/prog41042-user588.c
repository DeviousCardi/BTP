#include<stdio.h>
int main() {
    int n,i,k,j;
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    int max=0,c;
    for (j=0 ; j<n ; j++) {
        k=0;
        for (i=0 ; i<n-j ; i++) {
            c=a[j];
            if(a[j+i]>c) {
                k++;
                c=a[j+i]; } }
        if (max<k) {
            max=k; } }
    printf("%d",max+1);
    return 0; }