#include <stdio.h>
int main() {
    int n;int i;int flag=0;int k=0;int j=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
            scanf("%d,",&a[i]); }
        for(i=0;i<n;i++) {
                int count=0;
                k=a[i];
                for(j=0;j<n;j++) {
                        if(a[j]==k) {
                            count=count+1; } }
                    if(count==k) {
                            flag=flag+1; }
                    else
                    break; }
            if(flag==n)
            printf("Yes");
            else
            printf("No");
            return 0; }