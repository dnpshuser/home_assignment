#include<bits/stdc++.h>
using namespace std;

vector<string> split(string s,char del)
{
   s.push_back(del);
   int n = s.size();
   vector<string> vs;
   int pre = -1;
   for(int i = 0;i<n;i++)
   {
      if(s[i] == del)
      {
         vs.push_back(s.substr(pre+1,i-pre-1));
         pre = i;
      }
   }
   return vs;
}

int main(int argc,char** argv)
{

   char *t = argv[1];
   string ss(t);
   
   int n = ss.size();
   string s = "";
   for(int i = 0;i<n;i++)
   {
      if(ss[i] == ' ')
         continue;
      s.push_back(ss[i]);
   }
   n = s.size();
   s = s.substr(1,n-2);  // for {}


   map<string,int> mp;

   vector<string> vs = split(s,',');
   for(auto it : vs)
   {
      vector<string> us = split(it,':');
      string key = us[0];

      int m = key.size();
      key = key.substr(1,m-2);
      string val = us[1];
      int cnt = stoi(val);
      
      m = key.size();
      string temp = "";
      for(int i = m-1;i>=0;i--)
      {
         if(key[i] == '.')
         {
            mp[temp] += cnt;
         }
         temp = key[i] + temp;
      }
      mp[key] += cnt;
   }
   for(auto it : mp)
      cout<<it.first<<" = "<<it.second<<endl;

}