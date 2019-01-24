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
string s;
string rot(string str){
    int i=0,j=str.size();
    while(i<j){
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;j--;
    }
    return str;
}
string change(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]=='0') str[i]='1';else str[i]='0';
    }
    return str;
}
void pre(){
    s = "0010011";
    for(int i=4;i<=10;i++){
        string s1 = rot(s);
        string s2 = change(s1);
        s = s + "0" + s2;
    }
    cout<<s<<" "<<s.size();
}
int main()
{
    bhaukaal;
    pre();
    // int t;
    // cin>>t;
    // while(t--){
    //     int x; cin>>x;
    //     cout<<s[x]<<endl;
    // }

    return 0;
}
