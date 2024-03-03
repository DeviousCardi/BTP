#include <stdio.h>
int exit_gate(int g[],int a) {
        int i=1;
        while(i<a)
            i++;
        return g[i-1]; }
int main(){
    int trs[200],in[200],temp=1,i,j,n,m,l,flag=0,t,k,x;
    scanf("%d",&n);
    for(l=0;l<n;l++)
        scanf("%d",&in[l]);
    trs[0]=1;
    for(i=1;i<=2;i++) {
            trs[i]=exit_gate(in,temp);
            temp=trs[i]; }
    for(j=0;j<=2*n;j++) {
            for(m=j+1;m<=2*n;m++) {
                    if(trs[m]==trs[j]) {
                            flag=1;
                            break; } }
            if(flag==1)
                break; }
        k=m-j;
    for(x=0;x<=2*n;x++) {
            if(trs[x]==trs[m])
                break; }
    t=x+k;
    printf("%d ",exit_gate(in,1));
    return 0; }