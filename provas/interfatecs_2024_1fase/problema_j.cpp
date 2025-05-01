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

//Letra/Num: Problema J / nº 10
//Nome: Purrinha

using namespace std;

int main() {

    int np;
    cin >> np;
    //dbg(np);
    vector<pair<int, string>> jogadores;
    priority_queue<pair<int, string>> pq;

    for(int i=0; i<np;i++) {
        string nome;
        cin >> nome;
        //dbg(nome);
        jogadores.push_back(make_pair(0, nome));
        //dbg(jogadores[i].first);
        //dbg(jogadores[i].second);
    }

    int n;

    cin >> n;
    //dbg(n);

    for(int i=0;i<n;i++) {
        int soma=0;
        for (int j = 0; j < np; j++)
        {
            int a;
            cin >> a;
            soma+=a;
        }
        //dbg(soma);
        for (int j = 0; j < np; j++)
        {
            int a;
            cin >> a;
            if(a==soma) {
                //cout << jogadores[j].second << " +1 " <<  endl;
                jogadores[j].first+=1;
                //dbg(jogadores[j].first);
            }
        }
    }

    
    for(int i=0; i<np; i++) {
        //dbg(jogadores[i].first);
        //dbg(jogadores[i].second);
        pq.emplace(jogadores[i].first, jogadores[i].second);
    }

    //pair<int, string> par = pq.top();
    
    auto par_aux = pq.top();
    pq.pop();
    if (par_aux.first==pq.top().first) cout << "EMPATE" << endl;
    else cout << par_aux.second << " GANHOU" << endl;

    return 0;
}