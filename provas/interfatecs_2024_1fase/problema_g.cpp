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

//Letra/Num: Problema G / nº 07
//Nome: Plantão de Dúvidas

using namespace std;

int imprimeHifen() {

    int n=30;

    while(n--) cout << "-";

    cout << endl;

    return 0;
}

int main() {

    int max;
    string line;
    string materias[7] = {"ALGORITMOS", "BOAS PRATICAS", "DESEMPENHO", "FLUXOGRAMAS", "INTERPRETACAO DE ENUNCIADOS", "SINTAXE DA LINGUAGEM", "FICA PARA A PROXIMA!"};
    cin >> max;
    cin.ignore();

    vector<int> vagas (6, max);
    vector<vector<string>> lista_de_chamada(6);
    vector<string> lista_proximos;

    //int cont=0;

    while(getline(cin, line)) {
        istringstream ss(line);
        string nome;
        int n;
        bool proxima = false;
        
        ss >> nome;

        while(ss >> n) {
            if(vagas[n-1]>0) {
                lista_de_chamada[n-1].pb(nome);
                vagas[n-1]-=1;
            }
            else if (!proxima) {
                lista_proximos.pb(nome);
                proxima=true;
            }
            //nums.pb(n);
        }
        //cont++;
        //if(cont==5) break;
    }

    for(int i=0; i<6; i++) {
        imprimeHifen();
        cout << materias[i] << endl;
        imprimeHifen();
        sort(lista_de_chamada[i].begin(), lista_de_chamada[i].end());
        for(int j=0; j < (int)lista_de_chamada[i].size(); j++) {
            cout << lista_de_chamada[i][j] << endl;
        }
        cout << endl;
    }

    if(!lista_proximos.empty()) {
        imprimeHifen();
        cout << materias[6] << endl;
        imprimeHifen();
        for (int i = 0; i < (int)lista_proximos.size(); i++)
        {
            cout << lista_proximos[i] << endl;
        }
    }

    return 0;
}