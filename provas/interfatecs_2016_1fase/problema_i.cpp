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

//Letra/Num: Problema I / nº 09
//Nome: Minimum Wage

int main() { _

    double hbv, hev, qh, dpm, dpe, currate, amount=0, amountES=0;

    cin >> hbv >> hev >> qh >> dpm >> dpe >> currate;

    for(int i=0; i<3; i++) {
        amountES=(((hev*qh*currate*(1-dpe/100))+ amountES)*1.01);
    }

    for(int i=0; i<3; i++) {
        amount=(((hbv*qh*(1-dpm/100))+ amount)*1.01);
    }

    cout << fixed << setprecision(2) << amount << "BR " << amountES << "ES\n";

    return 0;
}
