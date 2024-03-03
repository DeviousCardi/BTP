#include <stdio.h>
int main(){
    int k,n,s=0;
    int a[n];
    scanf("%d",&k);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int j=0;j<n;j++) {
        s=a[j]+a[j+1];
        if(s==k)
            printf("unlucky");
            else
            printf("lucky");
            s=0;
            break; }
    return 0; }