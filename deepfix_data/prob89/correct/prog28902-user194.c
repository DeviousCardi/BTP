#include <stdio.h>
int main(){
    int a[100];
    int i,n,lucky,j,x=0;
    scanf("%d\n",&lucky);
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==lucky) {
                x=1;
                break; } }
        if(x==1)
            break; }
    if(x==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }