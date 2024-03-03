#include <stdio.h>
int main(){
    int n,gate[200],j,k,flag1=0,num[100],l,m,min=400,start,end,p;
    scanf("%d",&n)
    for(i=0,;i<2*n;i++,) {
            scanf("%d",&gate[i]);
            for(k=0;k<=i;k++) {
                    if(gate[k]==gate[i]) {
                            flag1=1;
                            break; } }
            if(flag1==0) {
                    num[j]==gate[i];
                    j=j+1; } }
    for(l=0;l<n;l++) {
            for(m=0;m<2*n;m++) {
                    if(gate[m]==num[l]) {
                            start=m;
                            for(p=m+1;p<2*n;p++) {
                                    if(gate[p]==gate[m])
                                    end=p;
                                    break; }
                            break; } }
             d=end-start;
            if(d<min)
                min=d; }
    printf("%d",min);
    return 0; }