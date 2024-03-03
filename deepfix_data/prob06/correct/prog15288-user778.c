#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,*ptrn,*ptrm;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    ptrn=(int*)calloc(n,sizeof(int));
    ptrm=(int*)calloc(m,sizeof(int));
    if(n==0||m==0){
        printf("0");
        return 0; }
    for(i=1;i<=n;i++)
    scanf("%d",&*(ptrn+i));
    for(i=1;i<=m;i++)
    scanf("%d",&*(ptrm+i));
    int j=1;
        i=1;
    while(i!=n+1){
        if((*(ptrm+j)>=*(ptrn+i)-x)&&(*(ptrm+j)<=*(ptrn+i)+y)){
            printf("%d %d\n",i,j);
            i++;
            j++; }
        else
        i++; }
    return 0; }