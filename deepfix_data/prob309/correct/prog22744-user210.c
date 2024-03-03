#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    int ar[n];
    int count[n];
    for(i=0;i<n-1;i++) {
        scanf("%d,",&ar[i]); }
    scanf("%d",&ar[n-1]);
    for(i=0;i<n;i++) {
        count[i]=0;
        for(j=0;j<n;j++) {
            if(ar[i]==ar[j]) {
                count[i]=count[i]+1; } } }
  for(i=0;i<n;i++) {
     if(count[i]!=ar[i]) {
         printf("No");
         break; } }
 if(i==n) {
     if(count[i-1]==ar[i-1]) {
         printf("Yes"); } }
    return 0; }