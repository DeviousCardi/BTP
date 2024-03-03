#include <stdio.h>
int main(){
    int n,i,j,temp,l,p,f;
        scanf("%d\n", &n);
    int a[100], count[100],new[100];
    for (i=0;i<100;i++) {
        if (i==(n-1)) {
          scanf("%d\n",&a[i]);
          break; }
        else
          scanf("%d ",&a[i]); }
    for(j=0;j<100;j++) {
          scanf("%d", &count[j]); }
    for (l=0;l<100;l++) {
        p=count[l];
        new[p]=a[l]; }
    for(f=0;f<100;f++)
        printf("%d ",&new[f]);
        printf("end");
    return 0; }