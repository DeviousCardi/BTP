#include <stdio.h>
int main(){
    int n;
    int a[100], b[100];
    int i=0, j;
    scanf("%d", &n);
    for(j=0; j<n; j++){
        scanf("%d", &a[j]); }
    int l=1;
    for (j=0; j<10; j++){
        i=l;
        l=a[i];
        b[j+2]=a[l];
        printf("%d", l) }
    b[0]=1;
    b[1]=a[0];
    for(j=0; j<10; j++){
        printf("%d ", b[j]); }
    return 0; }