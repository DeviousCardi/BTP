#include <stdio.h>
int f=0;
int k=0;
int sub(int a[],int l,int p) {
    if(l==1&&p==a[0])
        return 1;
    else if(l==1&&p!=a[0])
        return 0;
    else {
        int j;
        for(int i=0;i<l;i++) {
            int b[l-1];
            for(j=0;j<l;j++) {
                if(j<i)
                    b[j]=a[j];
                if(j>i)
                    b[j-1]=a[j]; }
            f+=sub(b,l-1,p-a[i]);
            k++;
            printf("%d  ",k); }
        return f; } }
int main() {
    int n,s,i;
    scanf("%d%d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sub(a,n,s);
    printf("%d",f); }