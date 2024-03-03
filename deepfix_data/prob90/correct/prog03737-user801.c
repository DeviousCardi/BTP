#include <stdio.h>
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int a[2000000];
    int i=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int p;
    int flag=0;
    for(p=0;p<n;p++) {
        int j,l;
        j=k-a[p];
        for (l=0;l<n;l++) {
            if (a[l]==j)
            flag=1; } }
    if (flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }