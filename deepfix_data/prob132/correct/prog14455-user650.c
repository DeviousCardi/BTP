#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[2*n-1];
    for(i=0;i<2*n-1;i=i+2)
    scanf("%d",&a[i]);
    int sun=0;
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j])
             flag=flag+1; }
        if(flag==a[i])
        sun=sun+1; }
    if(sun==n)
    printf("Yes");
    else
    printf("No");
    return 0; }