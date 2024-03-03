#include<stdio.h>
int sub(int a[],int l,int p) {
    int f=0;
    if(p==0)
        return 1;
    if(l==1&&p!=a[0])
        return 0;
    int b[l-1],j;
    for(int i=0;i<l;i++) {
        for(j=0;j<l;j++) {
            if(j<i)
                b[j]=a[j];
            if(j>i)
                b[j-1]=a[j]; }
        f+=sub(b,l-1,p-a[i]); }
    return f; }
int main() {
    int n,s,i;
    scanf("%d%d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int min=a[0];
    for(i=0;i<n;i++)
        if(min>a[i])
            min=a[i];
    if(min<0) {
        for(i=0;i<n;i++)
            a[i]-=min;
        s-=n*min; }
    if(sub(a,n,s))
        printf("YES");
    else
        printf("NO"); }