#include <bits/stdc++.h>
#define pb push_back
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

/* Solução 1: minimo dos prefixos e sufixos 
+ multiset pra achar minimo na janela
=> O (N.logN)
- calcular mínimos de todos os prefixos e sufixos
- */

using namespace std;

#define MAXN 100100
#define INF 2000000000

int n, k;
int v[MAXN], pref[MAXN], suf[MAXN];

int main() { _
    
    cin >> n >> k;
    pref[0] = INF;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pref[i] = min(pref[i-1], v[i]);
    }
    
    suf[n+1] = INF;
    for (int i = n ; i >0; i--)
    {
        suf[i] = min(suf[i+1], v[i]);
    }
    
    multiset<int> s;
    int resp = 0;
    for (int i = 1; i <=n; i++)
    {
        s.insert(v[i]+i);
        if (i-k > 0)
            s.erase(s.find(v[i-k] + i-k));
        int r = *s.begin() - i + k;
        if (i-k > 0)
            r = min(r, pref[i-k]);
        if (i < n)
            r = min(r, suf[i+1]);
        resp = max(resp, r);
    }
    
    cout << resp << '\n';

    return 0;
}