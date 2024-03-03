#include <stdio.h>
int main() {
    int m,n;
    int sum=0;
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++){
        int sum1=0;
        for(int j=0;j<m;j++){
            int a;
            scanf("%d",&a);
            sum1+=a; }
        if(sum1>sum)
            sum=sum1; }
    printf("%d",sum);
    return 0; }