#include <stdio.h>
int f=0;
int sub(int a[],int l,int p) {
    if(p==0)
        return 1;
    if(l==1&&p==a[0])
        return 1;
    if(l==1&&p!=a[0])
        return 0;
    int b[l-1],j;
    for(int i=l-1;i>=0;i--) {
        for(j=0;j<l;j++) {
            if(j<i)
                b[j]=a[j];
            if(j>i)
                b[j-1]=a[j]; }
        return f+=sub(b,l-1,p-a[i]); } }
int main() {
    int n,s,i;
    scanf("%d%d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sub(a,n,s);
    if(f)
        printf("YES");
    else
        printf("NO"); }