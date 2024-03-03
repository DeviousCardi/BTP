#include <stdio.h>
int main() {
    int N1,N2,i,j,k,l,m,n,flag=0;
    int a1[20],a2[20];
    scanf("%d",&N1);
        for(i=0;i<N1;i++){
            scanf("%d ",&a1[i]); }
    scanf("%d",&N2);
        for(j=0;j<N2;j++){
            scanf("%d ",&a2[j]); }
    for(k=0;k<N1;k++){
        if(a2[0]==a1[k]){
            for(l=0;l<N2;l++){
                if(a2[l]==a1[k]){
                    k++;
                    continue;
                    flag=1; }
                if(a2[l]!=a1[k]){
                    printf("NO");
                    return 0; } } }
        if(flag==1){
            printf("YES");
            return 0; }
        if(a2[0]!=a1[k]){
            flag=0;
            continue; } }
    if(flag==0){
        printf("NO"); }
	return 0; }