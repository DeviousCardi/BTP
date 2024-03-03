#include <stdio.h>
int main() {
    int n,i,j,k,m,count;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    m=0;
    for(j=0;j<n;j++) {
        if(a[j]==b[m])
        continue;
        else if(m!=0)
        m++;
        count=0;
        b[m]=a[j];
        printf("%d\n",m);
        for(k=j+1;k<n;k++) {
            if(a[k]==a[j]) {
                count++;
                m++;
                b[m]=a[k]; } }
        printf("%d\n",m);
        if(count!=a[j]) {
            printf("No");
            break; } }
    if(m==n)
    printf("Yes");
     return 0; }