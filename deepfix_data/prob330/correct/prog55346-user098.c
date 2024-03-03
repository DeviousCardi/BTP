#include <stdio.h>
int main(){
    int a[100];
    int n,nop=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        int ni;
        scanf("%d",&ni);
        a[i]=ni; }
    for(int j=1;j<n-1;j++) {
        if(a[j]>a[j-1]&&a[j]>a[j+1])
            nop++; }
    printf("%d",nop);
    return 0; }