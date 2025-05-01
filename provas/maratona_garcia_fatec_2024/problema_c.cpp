#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

//Nome: Problema C / C-c, C-v

using namespace std;

int main() { _

    int n;

    vector<int> respostas;
    set<int> s;

    cin >> n;

    while (n--) {
         int x;
         set<int> s;

         cin >> x;

         while(x--){
             int a;
             cin >> a;
             s.insert(a);
         }

        respostas.pb(s.size());
    }

    for(int r : respostas) cout << r << endl;
    return 0;
}