#include <stdio.h>
int main() {
    int n,i,c,j,count=0;
    scanf("%d",&n);
    char b[100000];
    scanf("%s",b);
    int a[n];
    for(i=0;i<n;i++)
    printf("%c" ,b[2*i]);
    for(i=0;i<10000;i++) {
        j=0;
        if(b[i]!=','){
        a[j]=b[i];
        j++;} }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    for(i=0;i<n;i++) {
        c=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            c++; }
        printf("\n%d\n",c);
        if(c==a[i])
        count++; }
    printf("%d ",count);
    if(count==n)
    printf("Yes");
    else
    printf("No");
    return 0; }