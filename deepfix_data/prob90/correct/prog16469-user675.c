#include <stdio.h>
int main(){
    int a, n,m,d;
    int b[1000];
    int c[500];
    scanf("%d\n", &a);
    scanf("%d\n", &n);
    m=0;
    d=0;
    for(int i=0;i<n;i++)
        scanf("%d", &b[i]);
    for (int i=0;i<500;i++){
        for (int j=0;j<n;j++){
            if(b[j]==i){
                c[m]=i;
                m=m+1;
                break; } } }
    for(int i=0;i<500;i++){
        if(c[i]<=a){
            for(int j=i+1;j<500;j++){
                if (c[j]=a-c[i]){
                    d=d+1;
                    break; } } }
        if(d!=0)
            break; }
    if (d!=0)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }