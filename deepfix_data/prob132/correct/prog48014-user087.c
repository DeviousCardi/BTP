#include <stdio.h>
int main() {
    int n;int flag=0;int i;int j;char k='0';
    scanf("%d",&n);
    char a[2*n-1];
    scanf("\n%s",a);
    for(i=0;i<n;i++) {
            int count=0;
            k=a[2*i];
            for(j=0;j<n;j++) {
                    if(a[2*j]==k) {
                            count=count+1; } }
                int m=k-'0';
                if(count==m)
                flag=flag+1;
                else
                break; }
        if(flag==n)
        printf("\nYes");
        else
        printf("\nNo");
    return 0; }