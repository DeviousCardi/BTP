#include <stdio.h>
void findmax(int arr[],int size) {
    int max = arr[0],flag;
    for(int i=0;i<size;i++) {
            if(arr[i]>max) {
                max=arr[i];
                flag=i; } }
    printf("%d %d",max,flag); }
int main() {
    int i,j,n,m,a,r;
    scanf("%d %d",&n,&m);
    int c[m+1],s[n+3];
    for(i=1;i<=n;i++) {
        s[0]=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&a);
            c[0]=0;
            c[j]=c[j-1]+a; }
        s[i]=c[m]; }
    findmax(s,n+1);
    return 0; }