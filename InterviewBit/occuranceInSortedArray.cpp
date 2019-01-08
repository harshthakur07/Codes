//harsh thakur solution  

#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define mp(a,b) make_pair(a,b)
#define ll long long
#define pi pair<int,int>
#define vecti vector<int>
#define vpi vector<pair<int ,int> >
#define pb(a) push_back(a)
#define bhaukaal ios_base::sync_with_stdio(false); cin.tie(NULL)

    int lower(vector<int>v, int l, int r, int x)
    {
        if (l <= r)
        {
            int mid = (l + r) / 2;
            if ((mid == 0 || v[mid - 1] < x) && v[mid] == x)
                return mid;
            if (v[mid] < x)
                return lower(v, mid + 1, r, x);
            else
                return lower(v, l, mid - 1, x);
        }
        return -1;
    }
    int upper(vector<int> v, int l, int r, int x)
    {
        if (l <= r)
        {
            int mid = (l + r) / 2;
            if ((mid == v.size()-1 || v[mid + 1] > x) && v[mid] == x)
                return mid;

            if (v[mid] <= x)
                return upper(v, mid + 1, r, x);
            else
                return upper(v, l, mid - 1, x);
        }
        return -1;
    }
    int
    main() {
        bhaukaal;
        int N, i, x;
        cin >> N;
        int target;
        cin >> target;
        vecti v(N);
        rep(i, N) cin >> v[i];
        int l = lower(v, 0, N - 1, target);
        int r = upper(v, 0, N - 1, target);
        cout << l << " " << r;
        if(l!=-1 && r!=-1)
        cout << l << " " << r;
        else cout<<-1;
        return 0;
    }
