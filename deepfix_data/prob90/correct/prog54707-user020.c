#include <stdio.h>
int main(){
    int k,n,b=0;
    int a[1000];
    scanf("%d%d",&k,&n);
    if(k%2!=0&&n<=1000&&n>1) {
        for(int i=1;i<=n;i++) {
            scanf("%d",&a[i]);
            if (a[i]<0&&a[i]>499)
            return 0; }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                int sum = a[i]+a[i+j];
                if (sum == k) {
                    b++;
                    printf("lucky"); } }
            if (b!=0)
            break; } }
    if (b==0)
    printf("unlucky");
    return 0; }