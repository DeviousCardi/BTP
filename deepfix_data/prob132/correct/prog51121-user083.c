#include <stdio.h>
int main()
{   int n,m=0,i,j,l=0;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d,",&arr[i]); }
    for(i=0;i<n;i++){
        m=0;
        for(j=0;j<n;j++){
            if((arr[i]==arr[j])&&(i!=j))
            m=m+1; }
        if(m==arr[i])
        l=l+1; }
    if(l==n)
    printf("Yes");
    else
    printf("%d",arr[1]);
    return 0; }