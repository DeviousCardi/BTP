#include <stdio.h>
int main(){
    int n,t,s;
    scanf("%d",&n);
    int a[n],b[100];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    b[1]=a[0];
    for(int j=2;j<100;j++)b[j]=a[a[j-1]];
    for(int k=0;k<100;k++) {
        for(int m=k+1;m<100;m++) {
            if(b[k]==b[j]) {
                t=k-j;
                printf("%d ",t);
                break; } }
        if(b[k]==b[j]&&k-j!=t) {
            s=k-j-t;
            printf("%d",s);
            break; } }
    return 0; }