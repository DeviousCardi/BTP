#include <stdio.h>
int main(){
    int room[1024],rndm[1024];
    int n,i,j,p,q,num1,num2;
    room[0]=0;
    rndm[0]=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    scanf("%d",&room[i]);
    p=room[1];
    for(i=1;i<n;i++) {
        q=room[p];
        p=q;
        rndm[i]=q; }
    for(i=1;i<n;i++) {
        for(j=i;j<n;j++) {
            if((rndm[j]==rndm[i])&&(i!=j))
            {num1=j;
            num2=j-i;
            goto A;} } }
    A:
    printf("%d %d",num1,num2);
    return 0; }