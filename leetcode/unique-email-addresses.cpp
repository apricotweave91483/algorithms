#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
         unordered_map<string, int> unique_mails;
         string temp;
         bool recAT;
         bool pl;
         int cnt = 0;
         for(int x = 0; x<emails.size();++x){
            temp = "";
            recAT = 0;
            pl = 0;
            for(int z = 0; z<emails[x].size();++z){
                if(emails[x][z]=='@'){recAT=1;pl=0;}
                if(!recAT&&emails[x][z]=='+')pl=1;
                if(!recAT&&!pl){
                    if(emails[x][z]!='.')temp+=emails[x][z];
                }
                else if (!pl)temp+=emails[x][z];

            }
            unique_mails[temp]++;
         }
         for(pair z: unique_mails)cnt++;
         return cnt;

    }
};
