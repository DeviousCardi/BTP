#include <stdio.h>
int main(){
    int n;
    int t=1,k,count=0;
    int a[100];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int x[n];
    x[0]=1;
    while(count<=n) {
        int i=a[x[count]-1];
        count++;
        x[count]=i; }
    for(int i=2;i<n;i++) {
        if(x[1]!=x[i])
            t++;
        else
            break; }
    printf("%d",t+1);
    for(int )
    return 0; }