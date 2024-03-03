#include <stdio.h>
int main(){
    int k,n,s,c;
    int a[n];
    scanf("%d",&k);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++)
    {    s=0,c=0;
        for(int j=0;j<n;j++) {
        s=a[i]+a[j];
        if(s==k)
           c++;
            break; }
        break; }
    if(c==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }