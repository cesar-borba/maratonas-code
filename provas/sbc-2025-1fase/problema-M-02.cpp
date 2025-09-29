#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define sc second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

#define MAXN 100100
#define INF 2000000000

// MINIMUM STACK / MINIMUM QUEUE

/*
Solução 2:
utilizar queue com operacao de minimo em O(1)
=> O(N)
*/

struct min_queue
{
    deque<int> q;

    int minimum() 
    {
        return q.front();
    }

    void insert(int x)
    {
        while (!q.empty() && q.back() > x)
            q.pop_back();
        q.push_back(x);
    }

    void remove(int x)
    {
        if (!q.empty() && q.front() == x)
            q.pop_front();
    }
};

int n, k;
int v[MAXN];

min_queue q, suf;

int main() { _
    
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        suf.insert(v[i]);
    }
    
    int resp = 0, min_pref = INF;
    for (int i = 1; i <= n; i++)
    {
        q.insert(v[i] + i);
        if (i - k > 0) {
            q.remove(v[i -k] + i -k);
            min_pref = min(min_pref, v[i -k]);
        }
        int r = q.minimum() -i +k;

        //prefixo
        r = min(min_pref, r);

        //sufixo
        suf.remove(v[i]);
        if(i < n)
            r = min(r, suf.minimum());
        resp = max(resp, r);
    }
    
    cout << resp << '\n';

    return 0;
}