#include <stdio.h>
void bsort(int a[],int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; } } }
    return; }
int main() {
    int n,i,key;
    scanf("%d\n",&n);
    int a[n];
    scanf("%d",&a[0]);
    for(i=1;i<n;i++) scanf(",%d",&a[i]);
    bsort(a,n);
    key=a[0]-1;
    for(i=1;i<n;i++) {
        if(a[i]==a[i-1]) key--;
        else key=key+a[i]-1; }
    if(key==0) printf("Yes");
    else printf("No");
    return 0; }