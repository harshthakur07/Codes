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

    long convertToNumber(string s){
        int k = 1; long ans = 0;
        for(int i=s.size()-1;i>=0;i--){
                ans += ((int)s[i] - 48)*k;
                k = k*10;
        }
        return ans;
    }

int main()
{
    bhaukaal;
    int T; cin>>T;
    while(T--){
        string s;
        cin>>s;
        long a,b,c,d; int i;
        vector<long>num;
        vector<char>op;
        bool first = false,second = false;
        string str = "";
        for(i=0;i<s.size();i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='=') {
                op.push_back(s[i]);
                long t = convertToNumber(str);
                num.push_back(t);
                str = "";
            }else{
                str += s[i];
                // cout<<str<<endl;
            }
            
        }
        long t = convertToNumber(str);
        num.push_back(t);
        bool isValid = true;
        if(op[0]=='+' && op[1]=='+'){
            long x = num[0] + num[1] + num[2];
            if(x!=num[3]) isValid = false;
        }
        else if (op[0] == '+' && op[1] == '-')
        {
            long x = num[0] + num[1] - num[2];
            if (x != num[3])
                isValid = false;
        }
        else if (op[0] == '-' && op[1] == '+')
        {
            long x = num[0] - num[1] + num[2];
            if (x != num[3])
                isValid = false;
        }
        else if (op[0] == '-' && op[1] == '-')
        {
            long x = num[0] - num[1] - num[2];
            if (x != num[3])
                isValid = false;
        }
        if(isValid)
            cout << "Valid Equation\n";
            else
                cout << "Invalid Equation\n";
    }

    return 0;
}

