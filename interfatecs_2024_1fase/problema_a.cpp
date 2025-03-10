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

//Letra/Num: Problema A / nº 01
//Nome: Mapa de calor

using namespace std;

int main() { _

    int n;
    vector<int> values = {0, 0, 0, 0 ,0};
    vector<string> regioes = {"superior", "esquerda", "centro", "direita", "inferior"};
    string regiao = regioes[0];
    int contagem;

    cin >> n;

    while(n--) {

        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            if (a!=0) values[0]++;
        }

        for (int i = 0; i < 4; i++)
        {
            int a;
            cin >> a;
            if (a!=0) values[1]++;
            cin >> a;
            if (a!=0) values[2]++;
            cin >> a;
            if (a!=0) values[3]++;
        }
        
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            if (a!=0) values[4]++;
        }

    }

    contagem=values[0];
    for (int i = 1; i < 5; i++)
    {
        if (values[i]>contagem) {
            regiao = regioes[i];
            contagem=values[i];
        }
    }

    cout << regiao << endl;

    return 0;
}