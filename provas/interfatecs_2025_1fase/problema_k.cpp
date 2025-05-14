#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _

    int t, v, c, m;
    vector<int> vec;

    cin >> t >> v >> c >> m;

    vec.pb((m*t+v*t)*2);
    vec.pb((c*t+2*v*t)*2);
    vec.pb((c*t+2*m*t)*2);

    auto min = min_element(vec.begin(), vec.end()); //retorna um iterador para o menor valor do vetor

    print(*min); //como min armazena um iterador, é necessário utilizar '*' para printar o valor armazenado

    return 0;
}