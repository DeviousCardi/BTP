#include <stdio.h>
int main(){
    int k,n=0,i,a[n],temp,j;
    scanf("%d\n %d\n",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
        temp=0;
    for(i=0,j=0;i<n;i++,j++) {
        if(a[i]+a[j]==k)
            temp=1;
            break; }
    if(temp==1)
        printf("lucky");
        else if(temp==0)
        printf("unlucky");
    return 0; }