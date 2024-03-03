#include <stdio.h>
int main() {
    int n,i,j,count;
    char a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%c",&a[i]);
        if(a[i]==',')
        i--;
        else
        a[i]=a[i]-'0'; }
    for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n&&j!=i;j++) {
            if(a[i]==a[j])
            count++; }
        if(count!=a[i]) {
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }