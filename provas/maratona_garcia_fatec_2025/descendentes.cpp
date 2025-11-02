#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
// #define _                         \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;
const int TAMANHO = 60;

int tabela[TAMANHO][TAMANHO];
set<int> filhos;
vector<int> vec;

void populaTabela()
{
    // print("populando tabela");

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            tabela[i][j] = 0;
        }
    }
}

void printandoTabela()
{
    // print("printando tabela");

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            cout << tabela[i][j] << " ";
        }
        cout << endl;
    }
}

void insereEBuscaFilhos(int pai)
{
    filhos.insert(pai);
    vec.push_back(pai);
    for (int i = 0; i < TAMANHO; i++)
    {
        if (tabela[pai - 1][i] == 1)
            insereEBuscaFilhos(i + 1);
    }
}

int main()
{
    populaTabela();
    // printandoTabela();
    int n;

    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        // dbg(a);
        // dbg(b);
        // dbg(tabela[a - 1][b - 1]);
        tabela[a - 1][b - 1] = 1;
    }

    // printandoTabela();

    int pai;
    cin >> pai;
    insereEBuscaFilhos(pai);
    // dbg(filhos.size());
    sort(vec.begin(), vec.end());
    filhos.erase(pai);
    for (int num : vec)
        cout << num << " ";
    cout << endl;
    cout << vec.size() - 1 << endl;
    cout << filhos.size() << endl;

    return 0;
}