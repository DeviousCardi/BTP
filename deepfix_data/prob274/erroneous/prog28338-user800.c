#include <stdio.h>
int main(){
    int n;
    int i;
    int t=0,k=0,p;
    int room[100];
    int rchk[100];
    int flag=0;
    for(i=0;i<100;i++)
        rchk[i]=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
        scanf("%d",&room[i]);
    i=1;
    while(1) {
            t++;
            if(rchk[i]==1) {
                p=room[i];
                while(1) {
                    i=room[i];
                    k++;
                    if(p==room[i]) {
                        flag=1;
                        break; } } }
            if(!flag) {
                rchk[i]=1;
                i=room[i]; } } }
    return 0; }