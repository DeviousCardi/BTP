#include <stdio.h>
int main() {
    int i,j,n,m,p,ch,max,min;
    int num[1000];
    scanf("%d",&p);
    for(int j=0;j<p;j++) {
        scanf("%d",&num[j]); }
    m=num[0];
    n=num[0];
    for(i=1;i<p;i++){
        if(m>num[i]){
            m=num[i];
            max=i;
        } if(n<num[i]) {
            n=num[i];
            min=i; } }
    ch=num[max];
    num[max]=num[min];
    num[min]=ch; }
    for(i=1;i<p;i++){
        printf("%d",num[i]); }
    printf("end");
    return 0; }