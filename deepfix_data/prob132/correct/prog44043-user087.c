#include <stdio.h>
int main() {
    int n;int flag=0;int i;int j;int k=0;
    scanf("%d",&n);
    char a[2*n-1];
    scanf("\n%s",a);
    for(i=0;i<n;i++) {
            int count=0;
            k=a[2*i-1];
            for(j=0;j<n;j++) {
                    if(a[2*j-1]==k) {
                            count=count+1; } }
                if(count!=(k+1))
                break;
                else
                flag=flag+1; }
        if(flag==n)
        printf("Yes");
        else
        printf("No");
    return 0; }