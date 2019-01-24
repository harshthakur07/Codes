//harsh thakur solution

#include <bits/stdc++.h>
using namespace std;

#define f(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) f(i, 0, n)
#define mp(a, b) make_pair(a, b)
#define pi pair<int, int>
#define vecti vector<int>
#define vpi vector<pair<int, int>>
#define pb(a) push_back(a)
#define bhaukaal                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
void reset(unordered_map<char,int>&m,string t){
   
    for (int i = 0; i < t.size(); i++)
    {
        m[t[i]]++;
    }
}

string solution(string s,string t){
    int l = s.size();
    int n = t.size();
    int i;
    unordered_map<char,int>m;
    for(i=0;i<n;i++){
        m[t[i]]++;
    }
    string ans = ""; int al = INT_MAX;
    for(i=0;i<l-n;i++){
        int k = n; string temp = "";
        // cout<<m[s[i]]<<endl;
        if(m[s[i]]>0){
            // cout<<i<<endl;
            m[s[i]]--; k--; temp += s[i];
           for(int j=i+1;j<l;j++){
               if(m[s[j]]>0){
                    k--;
                    m[s[j]]--;
               }
               temp += s[j];
               if(k==0 && al>temp.size() && temp.size()>=n){
                //    cout <<temp<<"  hello\n";
                   al = temp.size();
                   ans = temp;
               }
           }
           if (k == 0 && al > temp.size() && temp.size() >= n)
           {
                  cout <<temp<<"  hello\n";
               al = temp.size();
               ans = temp;
           }
        }
        reset(m,t);
    }
    return ans;
}

int main(){
    string s,t; cin>>s>>t;
    cout<<solution(s,t);
    return 0;
}
