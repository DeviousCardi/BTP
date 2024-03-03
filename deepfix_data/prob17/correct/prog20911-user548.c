#include <stdio.h>
int main() {
    int m,n,k,j,i;
    scanf("%d",&m);
    int arr[m];
    int count=0;
    for(i=0;i<m;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(j=0;j<m;j++) {
        if(num[0]==arr[j]) {
            for(k=1;k<n;k++) {
                if(num[k]==arr[j+k])
                count=count+1; } }
          if(count==n-1)
    printf("YES");
    return 0; }
        printf("NO");
    return 0; }