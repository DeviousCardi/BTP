#include <stdio.h>
int main(){
    int room[1024],rndm[1024];
    int n,i,j,p,q,num;
    room[0]=0;
    rndm[0]=0
    scanf("%d",&n);
    for(i=1;i<n;i++)
    scanf("%d",&room[i]);
    p=a[1];
    for(i=1;i<n;i++) {
        q=room[p];
        p=q;
        b[i]=q; }
    for(i=1;i<n;i++) {
        for(j=i;j<n;j++) {
            if((room[j]==room[i])&&(i!=j))
            {num1=j-1=1;
            num2=j-1;
            goto A;} } }
    A:
    printf("%d %d",num1,num2);
    return 0; }