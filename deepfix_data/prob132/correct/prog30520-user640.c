#include <stdio.h>
int main() {
    int n,flag=9,b;
    scanf("%d",&n);
    int i,j,a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (a[j]>=a[j+1]) {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b; } } }
    for (i=0;i<n;i++) {
        for (j=i;j<i+a[i];j++) {
            if (a[i]!=a[j])
            {printf("No");
            flag=0;
            break;} }
        if (flag==0)
        break; }
    if (flag!=0)
    printf("Yes");
    return 0; }