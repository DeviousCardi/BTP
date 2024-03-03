#include <stdio.h>
int main(){
    int n,i,a[100],b[100],j=1,t=0,l,y=0;
    b[0]=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++) {
        b[j]=a[i];
        i=a[i]-1;
        t=t+1;
        for(l=0;l<j;l++) {
            if(b[l]==b[j]) {
                k=t-l+1;
                y=1;
                break; } }
        j=j+1;
        if(y==1)
        break; }
    printf("%d %d",t,l);
    return 0; }