#include <stdio.h>
int main(){
    int k,n;
    int a[n];
    scanf("%d",&k);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int j=0;j<n;j++) {
        int s=0;
        s=a[j]+a[j+1];
        if(s==k)
            printf("unlucky");
            else
            printf("lucky");
            break; }
    return 0; }