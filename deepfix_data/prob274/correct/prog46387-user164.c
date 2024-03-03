#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],snt=0;
    int tarr[2*n];
    int a=1,cnt,dnt,i;
    int j,count=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;;i++) {
        tarr[i]=a;
        a=arr[a-1];
        for(j=0;j<i;j++) {
            if(tarr[i]==tarr[j]) {
                printf("%d %d",i,i-j);
                return 0; } } }
    return 0; }