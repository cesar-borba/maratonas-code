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

//Nome: Problema B / Polímeros

using namespace std;

int main() { _

    string palavra;
    string palavra2;

    getline(cin, palavra);

    //dbg(palavra);

    int cont=0;

    for(char c : palavra) {
        int diff;
        //dbg(c);
        diff= abs(cont > 0 ? c-palavra2[cont-1] : 0);
        if(diff==32) {
            palavra2.pop_back();
            //dbg(palavra2);
            cont--;
        }
        else {
        palavra2.pb(c);
        cont++;
        //dbg(palavra2);
        }
    }

    cout << palavra2.size() << endl;

    return 0;
}