#include <stdio.h>
int main(){
    int n,i,j,temp,l,p,f;
        scanf("%d", &n);
    int a[n], count[n],new[n];
    for (i=0;i<n;i++) {
        if (i==(n-1)) {
          scanf("%d",&a[i]);
          break; }
        else
          scanf("%d ",&a[i]); }
    for(j=0;j<n;j++) {
          scanf("%d", &count[j]); }
    for (l=0;l<n;l++) {
        p=count[l];
        new[p]=a[l]; }
    for(f=0;f<n;f++)
        printf("%d ",&new[f]);
        printf("end");
    return 0; }