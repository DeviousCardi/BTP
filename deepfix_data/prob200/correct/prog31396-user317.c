#include <stdio.h>
int a[100];
int n;
int get(int upperLimit) {
 int m=0;
for(int i=0;i<n;i++){
    if(a[i]>m && a[i]<=upperLimit)
    m=a[i]; }
 return m; }
int main() {
    int k,max=0;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<n;i++){
       if(a[i]>max)
       max=a[i]; }
    printf("%d\n",max);
    for(int i=1;i<k;i++){
      int c=get(max);
      max=c;
      printf("%d\n",max); }
    return 0; }