#include <stdio.h>
int main(){
    int n,t,s;
    scanf("%d",&n);
    int a[n],b[100];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    b[0]=a[0];
    for(int j=1;j<100;j++)b[j]=a[a[j-1]];
        for(int m=1;m<100;m++) {
            if(b[0]==b[m]) {
                t=m;
                printf("%d ",t);
                break; } }
        for(int m=1;m<100;m++) {
           if(b[0]==b[m]&&m!=t) {
             s=m-t;
             printf("%d",s);
             break; } }
    return 0; }