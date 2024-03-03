#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[100];
    int a[100];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
     int j;
    for(j=0;j<n;j++) {
            scanf("%d",&a[j]); }
      int b[100];
      int k;
     for(k=0;k<n;k++) {
          b[a[k]]=num[k]; }
      printf("%d ",b[100]);
    printf("end");
    return 0; }