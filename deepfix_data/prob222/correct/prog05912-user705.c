#include <stdio.h>
int main()
{ int ams,aes,bms,bes,cms,ces;
  float ats,bts,cts;
  scanf("%d%d%d",&ams,&bms,&cms);
  scanf("%d%d%d",&aes,&bes,&ces);
  ats= (0.40*(ams*2))+(0.60*aes);
  bts= (0.40*(bms*2))+(0.60*bes);
  cts= (0.40*(cms*2))+(0.60*ces);
  if(ats>bts){
      if(ats>cts){
          if(bts>cts){
              printf("%.2f",bts); }
          else{
              printf("%.2f",cts); } }
      else{
          printf("%.2f",ats); } }
  else{
      if(bts>cts){
          if(cts>ats){
              printf("%.2f",cts); }
          else{
              printf("%.2f",ats); } }
      else{
          printf("%.2f",bts); } }
	return 0; }