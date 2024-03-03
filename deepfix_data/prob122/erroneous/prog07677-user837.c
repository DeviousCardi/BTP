#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    int ind;
    int flg=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for (j=1;j<=n;j++)
    {scanf("%d",&ind);
    if(ind==1) {
        printf("yes");
        else
        printf("no"); } } }
    return 0; }