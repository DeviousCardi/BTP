#include <stdio.h>
int main() {
    int n,i,flag=1,num[1000],count[1000],p=0,counter=0,k,m,j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d,", &num[i]);
    for(i=0; i<n; i++)
        printf("%d ",num[i]);
    for(i=0; i<1000; i++)
        count[i]=0;
    for(i=0; i<n; i++) {
            count[num[i]]++; }
    for(i=1; i<=n; i++)
        printf("%d ",count[i]);
    for(i=1; i<=n; i++) {
            if(count[i]!=0) {
                    if(count[i]!=i);
                        flag=0; } }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
    return 0; }