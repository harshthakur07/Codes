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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence,word;
        stringstream iss;
        
        getline (cin, sentence,'\n');
        bool isRealFancy = false;
        iss<<sentence;
        while(iss>>word){
            // cout<<word<<endl;
            if(word=="not") {isRealFancy = true; break;}
        }
        if(isRealFancy) cout<<"Real Fancy\n";
        else cout<<"regularly fancy\n";
    
    }

    return 0;
}
