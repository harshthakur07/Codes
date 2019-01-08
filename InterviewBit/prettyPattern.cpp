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

vector<vector<int> > prettyPrint(int A) {
    
     int i=0,j=A*2-1;
    int k = A;
    // vector<vector<int> >prettyArray(j,j);
    vector< vector<int>> prettyArray(j, vector<int> (j));
    while(k>=1){
        for(int x=i;x<j-i;x++) prettyArray[i][x] = k;
        for(int y=i;y<j-i;y++) prettyArray[y][i] = k;
        for(int z =i;z<j-i;z++) prettyArray[j-i-1][z] = k;
        for(int a=i;a<j-i;a++) prettyArray[a][j-i-1] = k;
        k--;i++;
    }
    return prettyArray;
}

int main(){ 
    bhaukaal;
    int A;
    cin>>A;

    vector<vector<int> >ans = prettyPrint(A);
    int i=0,j=A*2-1;
    int k = A;
    

    for(int x1=0;x1<j;x1++){
        for(int x2=0;x2<j;x2++){
            cout<<ans[x1][x2]<<" ";
       }   
       cout<<endl;
    }

 return 0;
}
