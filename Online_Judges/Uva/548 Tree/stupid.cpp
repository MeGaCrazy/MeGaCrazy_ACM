#include <bits/stdc++.h>
using namespace std;
const int N=10005;
int in[N],po[N],dis[N],n;
vector<int>l[N],r[N];
int solve(int s){
     queue<int>q;
     q.push(s);
     dis[s]=1;
     int pos=-1;
     memset(l,0,sizeof(left));
     memset(r,0,sizeof(r));
     for(int i=0;i<n;i++){
        if(in[i]==s){pos=i;}
        if(pos!=-1)r[s].push_back(in[i]);
     }
     for(int i=0;i<n;i++){
       if(i<pos)l[s].push_back(in[i]);
     }
     while(!q.empty()){
        int u=q.front();
        q.pop();
       

     
     
     }



}
int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif
      string str;
      while(getline(cin,str)){
         stringstream in(str);
         n=0;
         int a;
         while(in>>a){
          in[n++]=a;
         }
         getline(cin,str);
         in(str);
         n=0;
         while(in>>a){
           po[n++]=a;
         }
         int ans=solve(a);

      
      
      }




}