#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    int j,k;
    int flag=0;
    for(j=0;j<n;j++) {
        int count=0;
        for(k=0;k<n;k++) {
            if(A[j]==A[k])
            count=count+1; }
        if(count==A[j])
        flag=flag+1;
        printf("%d %d/n",count,A[j]); }
    if (flag==n)
    printf("Yes %d",flag);
    else
    printf("No %d",flag);
    return 0; }