#include <stdio.h>
int main() {
    int n,k,max=0;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(int j=0;j<k;j++){
    for(int i=0;i<n;i++){
       if(a[i]>max)
       max=a[i]; }
    printf("*%d\n",max);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        if(a[i]==max)
        a[i]=0;
        printf("%d ",a[i]); } }
    return 0; }