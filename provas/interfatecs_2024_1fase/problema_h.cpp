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

//Letra/Num: Problema H / nº 08
//Nome: Quem é o pivô?

using namespace std;

int main() { _

    int n=3;
    vector<int> v;

    //long long ou int (long int)

    //int -> -2147483648 a 2147483647
    //int -> -2*10e9 a 2*10e9

    //2*109

    while(n--) {
        int a;
        cin >> a;
        v.pb(a);
    }

    sort(v.begin(), v.end());

    cout << v[1] << endl;

    return 0;
}