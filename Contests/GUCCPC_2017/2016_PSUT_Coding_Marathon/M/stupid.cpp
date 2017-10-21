#include <bits/stdc++.h>
using namespace std;
const int N=305;
int a[N];
char o[N];



int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
     int n;
      scanf("%d",&n);
      scanf("%d",&a[0]);
      for(int i=1;i<n;i++){  	
        scanf(" %c %d",o+i,a+i);
      }
      map<int,pair<int,int> >mp;
      mp[a[0]]=make_pair(0,0);
      for(int i=1;i<n;i++){
         int value=a[i];
         for(int j=90000;value+j>=-90000;j--){
          //   if(j+value < (int)-90000)continue;
          //&&j+value<=(i+1)*300
             if(mp.count(j)==0){
                continue;
             }else{

               int steps=mp[j].first;
               int last=mp[j].second;
                              cerr<<"plus "<<j+value<<endl;
               cerr<<"min  "<<j-value<<endl;
               cerr<<" steps "<<steps<<endl;
               if(last!=i-1)continue;
               if(o[i]=='+'){
                  if(mp.count(j+value)==0||mp[j+value].first > steps || mp[j+value].first <= steps && mp[j+value].second < i){
                       mp[j+value]=make_pair(steps,i);
                  }else if (mp.count(j-value)==0||mp[j-value].first > steps+1 || mp[j-value].first <= steps+1 && mp[j-value].second < i){
                      mp[j-value]=make_pair(steps+1,i);
                  } 
               
               }else if(o[i]=='-'){
                    if(mp.count(j-value)==0||mp[j-value].first > steps || mp[j-value].first <= steps && mp[j-value].second < i){
                       mp[j-value]=make_pair(steps,i);
                    }else if(mp.count(j+value)==0||mp[j+value].first > steps+1 || mp[j+value].first <= steps+1 && mp[j+value].second < i){
                         mp[j+value]=make_pair(steps+1,i);
                    }  
               }
             }
         }
      
      }
      bool f=(mp[0].second==n-1);
      int ans=mp[0].first;
      cerr<<mp[0].first<<" "<<mp[0].second<<endl;
      if(!f){
       printf("-1");
      }else{
         printf("%d\n",ans);
      }
}

/*
               if(mp.count(j+value)==1){
                    if(o[i]=='+'){
                        if( mp[j+value].first < steps && mp[j+value].second==i);
                        else mp[j+value]=make_pair(steps,i);
                    }else if(o[i]=='-'){
                         if( mp[j+value].first < steps+1 && mp[j+value].second==i);
                         else mp[j+value]=make_pair(steps+1,i);
                    }
               }else if( mp.count(j+value)==0){
                   if( o[i]=='+')mp[j+value]=make_pair(steps,i);
                   else mp[j+value]=make_pair(steps+1,i);
               }else if ( mp.count(j-value)==1){
                    if(o[i]=='+'){
                        if( mp[j-value].first < steps+1 && mp[j-value].second==i);
                        else mp[j-value]=make_pair(steps+1,i);
                    }else if(o[i]=='-'){
                         if( mp[j-value].first < steps && mp[j-value].second==i);
                         else mp[j-value]=make_pair(steps,i);
                    }
               }else if(mp.count(j-value)==0){
                    if( o[i]=='-')mp[j-value]=make_pair(steps,i);
                    else mp[j-value]=make_pair(steps+1,i);
               }



*/