#include <stdio.h>
int a[100]={0};
int n;
int get(int upperLimit) {
 int m=0;
for(int i=0;i<n;i++){
    if(a[i]>m)
    m=a[i]; }
printf("$%d\n",m);
 return m; }
int main() {
    int n,k,max=0;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<n;i++){
       if(a[i]>max)
       max=a[i]; }
    printf("%d\n",max);
    for(int i=1;i<k;i++){
      int a=get(max);
      printf("%d\n",a);
        get(a); }
    return 0; }