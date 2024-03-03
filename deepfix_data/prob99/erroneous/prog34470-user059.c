include<stdio.h>
int a[20],maxtill[20];
int max(int m) {
    int i,j=a[0],k=0;
    for(i=0;i<=m;i++) {
        if(a[i]>j) {
            j=a[i];
            k++; } }
    return k; }
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    j=max(max(1+MaxTill[i]));
    printf("%d",j);
    return 0; }