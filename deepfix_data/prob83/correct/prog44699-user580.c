#include <stdio.h>
void func(int s[],int n1,int k1) {
    int m;
    for(int j=0;j<k1;j++) {
        m=s[n1-1];
        for(int i=0;i<n1-1;i++)
            s[i+1]=s[i];
        for(int i=0;i<n1;i++)
            printf("%d ",s[i]);
        printf("\n");
        s[0]=m; }
    for(int i=0;i<n1;i++)
        printf("%d ",s[i]); }
int main() {
    int a[100],n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    k%=n;
    func(a,n,k);
    return 0; }