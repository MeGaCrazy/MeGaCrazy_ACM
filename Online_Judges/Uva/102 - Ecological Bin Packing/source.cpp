#include <iostream>
#include <stdio.h>
#include <string.h>
int main(){
  int b[3],g[3],c[3];
  char s[4];
  int min=2e9;
  freopen("input.txt","r",stdin);
  while(scanf("%d %d %d %d %d %d %d %d %d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF){
  
    int min=2e9;
    //bcg
    int tmp=c[0]+g[0]+b[1]+g[1]+b[2]+c[2];
    if(tmp<min){
    min=tmp;
    strcpy(s,"BCG");
    }
    //bgc 
     tmp=c[0]+g[0]+c[1]+b[1]+b[2]+g[2];
    if(tmp<min){
    min=tmp;
    strcpy(s,"BGC");
    
    }
    //cbg
     tmp=b[0]+g[0]+c[1]+g[1]+b[2]+c[2];
    if(tmp<min){
    min=tmp;
    strcpy(s,"CBG");
    }
    //cgb
     tmp=b[0]+g[0]+c[1]+b[1]+c[2]+g[2];
    if(tmp<min){
     min=tmp;
     strcpy(s,"CGB");
    }
    
    //gbc
     tmp=b[0]+c[0]+g[1]+c[1]+g[2]+b[2];
    if(tmp<min){
    min=tmp;
    strcpy(s,"GBC");
    
    }
    //gcb
     tmp=c[0]+b[0]+g[1]+b[1]+g[2]+c[2];
    if(tmp<min){
    min=tmp;
    strcpy(s,"GCB");
    }
    printf("%s %d\n",s,min);
  }
 }