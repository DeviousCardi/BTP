#include <stdio.h>
int main() {
    int i,j,k,n,m,p,ch,max,min;
    int num[1000];
    scanf("%d",&p);
    for(j=0;j<p;j++) {
        scanf("%d",&num[j]); }
    m=num[0];
    n=num[0];
    for(i=0;i<p;i++){
        if(m>=num[i]){
            m=num[i];
            max=i;
        } if(n<=num[i]) {
            n=num[i];
            min=i; } }
    ch=num[max];
    num[max]=num[min];
    num[min]=ch;
    for(k=0;k<p;k++){
        printf("%d\n",num[k]); }
    printf("end");
    return 0; }