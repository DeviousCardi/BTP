#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int room[n];
    for(int i=0;i<n;i++)
        scanf("%d",&room[i]);
    int visit[n];
    int exit=1;
    int c1,c2;
    int j=0;
    int count=0;
    int count1=0;
    while(1) {
        visit[j]=room[exit-1];
        int cut;
        if(count==0) {
            for(int k=0;k<j;k++) {
                if(visit[k]==visit[j]) {
                    count=1;
                    cut=k;
                    c1=j;
                    break; } } }
        if(count==1) {
            for(int m=0;m<j;m++) {
                if(visit[m]==visit[c1])
                    count1++; }
            if(count1==2) {
                c2=j;
                break; } }
        exit=room[exit-1];
        j++; }
    printf("%d %d",c1,c2-c1);
    return 0; }