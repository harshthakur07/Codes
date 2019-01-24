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

int solution(string s){
    int l = s.length();
    int i=0,j=0, ans= -1;
    map<char,int>m;

    while(j<l){
        if(m[s[j]]==0) m[s[j]]++;
        else{
            m[s[j]]++;
            if(ans<j-i) ans = j-i;
            for (; i < j && m[s[j]]>1; i++)
            {
               
                m[s[i]]--;
            }
        }
        j++;
    }
    if (ans < j - i)
        ans = j - i;
    return ans;
}

int main(){
    bhaukaal;
    string str;
    cin>>str;
    int ans = solution(str);
    cout<<ans;
    return 0;
}
