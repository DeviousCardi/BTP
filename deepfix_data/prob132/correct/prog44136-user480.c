#include <stdio.h>
int main() {
    int n,i,c,j,count=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    printf("%d ",a[i]);}
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