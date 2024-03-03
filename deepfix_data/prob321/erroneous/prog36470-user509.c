#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float c;
    scanf("%d%d\n",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    if((x2<=-100)&&(x2>=100)&&(x1<=-100)&&(x1>=100)&&(y1<=-100)&&(y1>=100)&&(y2<=-100)&&(y2>=100)) {
    c=(y2-y1)/(x2-x1);
    if((x2-x1)==0){
    printf("inf");
      else
        printf("%.2f",c); } }
    return 0; }