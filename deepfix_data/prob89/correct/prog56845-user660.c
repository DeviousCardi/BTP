#include <stdio.h>
int main(){
    int k,n,num[100],i,l,m,flag1=0;
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++) {
            scanf("%d",&num[i]); }
    for(l=0;l<n;l++) {
            for(m=0;m<n;m++) {
                    if(m==l)
                        continue;
                    if(num[l]+num[m]==k) {
                            flag1=1;
                            break; } }
            if(flag1==1)
                break; }
    if(flag1==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }