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

//Letra/Num: Problema D / nº 04
//Nome: Rotação

using namespace std;

int main() {
    double r;
    int n;

    cin >> n >> r;

    vector<pair<double, double>> pontos;

    //conversão para radianos para utilizar cos() e sin()
    r=(r*M_PI)/180;
    //dbg(r);

    for(int i=0; i<n;i++) {
        double x, y;
        pair<double, double> par;
        cin >> x >> y;
        //dbg(x);
        //dbg(y);
        par = make_pair(cos(r)*x + -1*(sin(r)*y), sin(r)*x + cos(r)*y);
        pontos.push_back(par);
        //cout << fixed << setprecision(2) << xl << " " << yl << endl;
    }

    for (int i=0; i<n; i++) {
        cout << fixed << setprecision(2) << pontos[i].first << " " << pontos[i].second << endl;
    }

    return 0;
}
