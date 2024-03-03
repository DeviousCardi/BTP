#include <stdio.h>
int main(){
    int n,i,j,k,l; scanf ("%d",&n);
    int a[n];
    int b[n];
    for (i=0;i<n;i++) {scanf ("%d",&a[i]);}
    for (j=0;j<n;j++) {
        int c=0;
        for (k=0;k<n;k++){if (a[j]>a[k]) c=c+1;}
        b[n-c-1]=a[j]; }
    for (l=0;l<n;l++) printf("%d ",b[n-l-1]);
    printf("end");
    return 0; }