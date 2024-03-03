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
    while(1) {
        visit[j]=room[exit-1];
        int count=0;
        int cut;
        for(int k=0;k<j;k++) {
            if(visit[k]==visit[j])
                count++;
                cut=k;
                printf("%d\n",k);
                c1=j;
                break; }
        if(count==1) {
            int count1=0;
            for(int k=0;k<j;k++) {
                if(visit[k]==room[cut])
                    count1++; }
            if(count1==2) {
                c2=j;
                break; } }
        exit=room[exit-1];
        j++; }
    printf("%d %d",c1,c2-c1);
    return 0; }