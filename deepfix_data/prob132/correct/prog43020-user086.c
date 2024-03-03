#include <stdio.h>
int main() {
    int n,i,j,count=0,temp=0;
    char a[100];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i+=2) {
        for(j=0;j<n;j+=2) {
            count=0;
            if(a[i]==a[j]) {
                count++; } }
        if('count'==a[i])
        temp=1;
        else {
            temp=0;
            break; } }
    return 0; }