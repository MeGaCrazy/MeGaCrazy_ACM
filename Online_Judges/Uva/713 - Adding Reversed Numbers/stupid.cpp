#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
int main(){
   int n;
   scanf("%d",&n);
   while(n--){
     char s1[200]={0},s2[200]={0};
     scanf("%s %s",&s1,&s2);
     reverse(s1,s1+strlen(s1));
     reverse(s2,s2+strlen(s2));
     int a1=atoi(s1);
     int a2=atoi(s2);
     int ans=a1+a2;
     while(ans%10==0){ans/=10;}
     s1=to_string(ans);
     int length=strlen(s1);
     reverse(s1,s1+length);
     for(int i=0;i<length;i++){
       printf("%c",s1[i]);
      }printf("\n");               
   }








}