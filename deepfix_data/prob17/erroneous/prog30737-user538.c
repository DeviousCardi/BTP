#include <stdio.h>
int main() {
    int n1,n2,i,j,k,m=0,flag=0;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
	int a1[n1],a2[n2];
	for(i=0;i<n1;i++)
	     scanf("%d\n",&a1[i]);
	for(j=0;j<n2;j++)
    	 scanf("%d\n",&a2[j]);
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a1[i]==a2[j]) {
                if(a1[i]==a2[k]){
                    m=i+j;
                    flag1=1; } }
            if(flag==1){
            for("k=j;k<m;k++")
            if(a1[i]==a2[k])
            printf("YES");
            else
            printf("NO"); } } }
	return 0; }