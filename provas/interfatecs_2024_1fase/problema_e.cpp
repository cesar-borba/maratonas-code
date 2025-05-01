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

//Letra/Num: Problema E / nº 05
//Nome: Grupos de apoio tático voluntário

using namespace std;

int main() {

    int q, nr;
    vector<int> perf;
    vector<pair<string, vector<int>>> regioes;

    cin >> q;

    for(int i=0; i<q;i++) {
        int a;
        cin >> a;
        perf.pb(a);
    }

    cin >> nr;

    for(int i=0;i<nr;i++) {
        string st;
        vector<int> v;
        cin >> st;
        //regioes.push_back(make_pair(st, vector<int>(4)));
        for(int j=0; j<q;j++) {
            int a;
            cin >> a;
            //regioes[i].second[j] = a/perf[j];
            v.push_back(a/perf[j]);
        }
        regioes.push_back(make_pair(st, v));
    }

    for(int i=0; i<nr; i++) {
        sort(regioes[i].second.begin(), regioes[i].second.end());
        cout << regioes[i].first << " " << *regioes[i].second.begin() << endl; //utiliza-se '*', pois o retorno de regioes[i].second.begin() é um iterador, assim, com '*'
    }

    return 0;
}