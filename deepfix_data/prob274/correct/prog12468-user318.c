#include <stdio.h>
int main(){
    int n,t=0,s=0;
    scanf("%d",&n);
    int a[n+1],b[100];
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    for(int j=1;j<100;j++)b[j]=a[b[j-1]];
    for(int k=0;k<100;k++){
        for(int m=k+1;m<100;m++) {
            if(b[k]==b[m]) {
                t=m-k;
                printf("%d ",t);
                break; } }
        for(int m=k+1;m<100;m++) {
           if(b[0]==b[m]&&m-k!=t) {
             s=m-t;
             printf("%d",s);
             break; } }
        if(t!=0)
        break; }
    return 0; }