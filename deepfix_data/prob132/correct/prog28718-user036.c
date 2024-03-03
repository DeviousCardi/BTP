#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int flag=1;
    for(int i=0;i<n;i++){
        int k=a[i],count=0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i])
                count++; }
        if((count-1)!=k)
            flag=0; }
    if(flag==0)
        printf("No");
    else
        printf("Yes");
    return 0; }