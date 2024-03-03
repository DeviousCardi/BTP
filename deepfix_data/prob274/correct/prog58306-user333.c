#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
       b[i]=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t,k;
    t=0;
    k=0;
    int i=0;
    while(b[i]==0) {
        b[i]=1;
        i=a[i]-1;
        t++; }
    for(int j=0;j<n;j++)
       b[j]=0;
    while(b[i]==0) {
        b[i]=1;
        i=a[i]-1;
        k++; }
    printf("%d %d",t,k);
    return 0; }