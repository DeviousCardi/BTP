#include <stdio.h>
int main() {
    int flag=0;
    int k,n;
    scanf("%d\n",&k);
    scanf("%d",&n);
    int a[501];
    freq[501];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int j=0;j<n-1;j++) {
        for(int m=1;m<n-j;n++) {
          while(a[j]==m) {
               flag=1 }
           while(flag==1) {
               for(int p=0;p<501;p++) {
               while(a[p]==k-j) {
                   flag=2; } }
           if(flag==2);
           printf("lucky");
            else
            printf("unlucky"); }
    return 0; }