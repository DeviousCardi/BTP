#include<stdio.h>
int main() {
    int n,i,j,t,max=1,count=1;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        c[0]=a[i];
        k=1;
        for(j=i;j<n;j++) {
            if(a[i]<a[j]) {
                for(t=0;t<k;t++) {
                    if(a[j]<c[t])
                    {break;} }
                 if(t==k) {
                    c[k]=a[j];
                count=count+1;
                k=k+1;} }
            else {
                continue; } }
      if(count>max) {
          max=count; }
        count=1; }
    printf("%d",max);
    return 0; }