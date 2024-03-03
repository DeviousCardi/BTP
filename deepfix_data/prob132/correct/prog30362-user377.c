#include<stdio.h>
int main() {
    int n, a[1000],i=0,j=0,count[10000];
    for(int i=0;i<n;i++)
    a[i]=0;
    for(int j=0;j<10000;j++)
    count[j]=0;
    char str[1000];
    scanf("%d",&n);
    scanf("%s",str);
    while(i<n) {
        while(str[j]!=','&&str[j]!='\0') {
            a[i]=a[i]*10+str[j]-'0';
            j++; }
        j++;
        i++; }
    for(int i=0;i<n;i++) {
        count[a[i]]++; }
    for(int i=0;i<n;i++) {
        if(count[a[i]]!=a[i]) {
            printf("no super array");
            return 0; } }
    printf("Yes superarray");
    return 0; }