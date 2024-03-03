#include <stdio.h>
int main(){
    int n,i,j,temp,l,p,f;
        scanf("%d\n", &n);
    int a[n], count[n];
    for (i=0;i<n;i++) {
        if (i==(n-1))
          scanf("%d\n",&a[i]);
        else
          scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
          scanf("%d", &count[j]); }
    for (l=0;l<n;l++) {
        p=count[l];
        temp=a[l];
        a[l]=a[p];
        a[p]=temp; }
    for(f=0;f<n;f++)
        printf("%d ",&a[f]);
        printf("end");
    return 0; }