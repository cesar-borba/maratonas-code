#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
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

//Letra/Num: Problema G / nº 07
//Nome: E aí, professor, tem jeito?

int main() { _

    int n;

    cin >> n;

    while(n--) {
        vector<double> atts;
        for (int i=0; i<12; i++) {
            double a;
            cin >> a;
//            dbg(a);
            atts.pb(a);
        }

        sort(atts.begin(), atts.end(), greater<double>());

        double notaAtts=0;
        for (int i=0; i<9; i++) {
//            cout << atts[i] << endl;
            notaAtts+=atts[i];
        }

//        dbg(notaAtts);
        notaAtts/=9;
//        dbg(notaAtts);

        double subs = ((5.75-(notaAtts*0.2))*2)/0.8;

        if (subs>10) cout << "REPROVADO\n";
        else cout << fixed << setprecision(1) << subs << "\n";

    }

    return 0;
}
