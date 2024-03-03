#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]) }
    for(i=0;i<n;i++)
    b[i]=i+1;
    for(i=0,j=0;i<n,j<n;i++,j++) {
            if(i%2==0)
            c[j]=b[i];
            else
            c[j]=a[i]; }
    for(j=0;j<n;j++)
    printf("%d\n",c[j]);
    return 0; }