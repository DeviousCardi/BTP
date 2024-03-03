#include <stdio.h>
int main() {
    int n,flag=9,b=0;
    scanf("%d\n",&n);
    int i,j,a[n];
    for (i=0;i<n;i++)
    scanf("%d,",&a[i]);
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-1;j++) {
            if (a[j]>a[j+1]) {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b; } } }
    for (i=0;i<n;i=i+a[i]) {
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