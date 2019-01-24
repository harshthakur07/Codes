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

    int chess[9][9];

int fill(int r,int c){
   if(r<1 || c<1 || r>8 || c>8) return 0;
   int ans = 0;
   if(r<=8 && c<=8 && r>=1 && c>=1) ans++;
   if (r+1 <= 8 && c+1 <= 8 && r+1 >= 1 && c+1 >= 1) ans++;
   if(r-1 <=8 && c-1 <=8 && r-1>=1 && c-1>=1) ans++;
   if(r+1 <=8 && c<=8 && c>=1 && r+1>=1) ans++;
   if(r-1<=8 && c<=8 && c>=1 && r-1>=1) ans++;
   if(r-1 <= 8 && c+1<=8 && c+1>=1 && r-1>=1) ans++;
   if (r + 1 <= 8 && c -1  <= 8 && c - 1 >= 1 && r + 1 >= 1) ans++;
   if(r<=8 && r>=1 && c+1<=8 && c+1>=1) ans++;
   if(r<=8 && r>=1 && c-1 <= 8 && c-1>=1) ans++;
   return ans;
   
}

int main()
{
    bhaukaal;
    int t; cin>>t;
// for(int i=1;i<=8;i++){
//     for(int j=1;j<=8;j++){
//         chess[i][j] = fill(i,j);
//     }
// }
// for (int i = 1; i <= 8; i++)
// {
//     for (int j = 1; j <= 8; j++)
//     {
//         cout<<chess[i][j]<<" ";

//     }
//     cout<<endl;
// }

while (t--)
{
    int r, c, k;
    cin >> r >> c >> k;
    int moves = 0;
    // for (int z = k - 1; z >= 1; z--)
    // {
    //     if (r <= 8 && c <= 8 && r >= 1 && c >= 1)
    //         moves += chess[r][c];
    //     if (r + z <= 8 && c + z <= 8 && r + z >= 1 && c + z >= 1)
    //         {moves += chess[r + z][c + z]; cout<<"1==="<<endl;}
    //     if (r - z <= 8 && c - z <= 8 && r - z >= 1 && c - z >= 1)
    //         {moves += chess[r - z][c - z]; cout<<"2==="<<endl;}
    //     if (r + z <= 8 && c <= 8 && c >= 1 && r + z >= 1)
    //         {moves += chess[r + z][c]; cout<<"3==="<<endl;}
    //     if (r - z <= 8 && c <= 8 && c >= 1 && r - z >= 1)
    //         {moves += chess[r - z][c]; cout<<"4=="<<endl;}
    //     if (r - z <= 8 && c + z <= 8 && c + z >= 1 && r - z >= 1)
    //         {moves += chess[r - z][c + z]; cout<<"5==="<<endl;}
    //     if (r + z <= 8 && c - z <= 8 && c - z >= 1 && r + z >= 1)
    //         {moves += chess[r + z][c - z]; cout<<"6==="<<endl;}
    //     if (r <= 8 && r >= 1 && c + z <= 8 && c + z >= 1)
    //         {moves += chess[r][c + z]; cout<<"7=="<<endl;}
    //     if (r <= 8 && r >= 1 && c - z <= 8 && c - z >= 1)
    //        { moves += chess[r][c - z]; cout<<"8=="<<endl;}

    //         cout<<moves<<endl;
    // }
    // // moves += chess[r][c];
    // if(k==1) moves = chess[r][c];


    // int n = k-1;int i,j;
    // while(n>0){
    //     for(i=r-n;i<=r+n;i++){
    //         if(i>=1 && i<=8 && c-n>=1 && c-n<=8){
    //             // cout<<i<<" "<<c-n<<endl;
    //             moves += chess[i][c-n];
    //         }
    //     }
    //     for (i = r - n; i <= r + n; i++)
    //     {
    //         if (i >= 1 && i <= 8 && c + n >= 1 && c + n <= 8)
    //         {
    //             // cout << i << " 2 " << c + n << endl;
    //             moves += chess[i][c + n];
    //         }
    //     }
    //     for (i = c-n+1; i <= c + n-1; i++)
    //     {
    //         if (i >= 1 && i <= 8 && r + n >= 1 && r + n <= 8)
    //         {
    //             // cout << r+n << " 3 " << i << endl;
    //             moves += chess[r+n][i];
    //         }
    //     }
    //     for (i = c - n + 1; i <= c + n - 1; i++)
    //     {
    //         if (i >= 1 && i <= 8 && r - n >= 1 && r - n <= 8)
    //         {
    //             cout << r + n << " 4 " << i << endl;
    //             moves += chess[r - n][i];
    //         }
    //     }
    //     // cout<<moves<<endl;
    //     n--;
    // }
    // moves += chess[r][c];

    int dx = min(r+k,8) - max(r-k,1) + 1;
    int dy = min(c+k,8) - max(c-k,1) + 1;
    moves = dx*dy;
    cout << moves << endl;
    }
    return 0;
}
