#include <stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    int a1[n1];
    int i;
    for(i=0;i<=n1-1;i++){
        scanf("%d",&a1[i]); }
    int n2;
    scanf("%d",&n2);
    int a2[n2];
    int j;
    for(j=0;j<=n2-1;j++){
        scanf("%d",&a2[j]); }
    int flag[n2];
    for(j=0;j<=n2-1;j++){
        flag[j]=0;
        printf("%d\n",flag[j]); }
    for(j=0;j<=n2-1;j++){
        for(i=0;i<=n1-1;i++){
            if(a2[j]==a1[i]){
                flag[j]=1; } }
        printf("%d\n",flag[j]); }
    int count=0;
    for(j=0;j<=n2-1&&flag[j]==1;j++){
        count=j;
        printf("%d",count); }
    if(count=n2-1) {printf("YES");}
    else {printf("NO");}
     return 0; }