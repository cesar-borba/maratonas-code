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

//Letra/Num: Problema F / nº 06
//Nome: Valida Placas

using namespace std;

bool isLetra(char c) {

    if(c>='A') return true;

    return false;
}

bool isPlacaAntiga(string plv) {
    //dbg(plv.size());
    if(plv.size() > 6) return false;

    //dbg(isLetra(plv[0]));
    if(plv[0]!='A' && plv[0]!='P') return false;

    for(int i=1; i < (int)plv.size(); i++) {
        //dbg(plv[i]);
        if(isLetra(plv[i])) return false;
    }

    cout << "muito antiga" << endl;

    return true;
}


bool isPlacaNumerica(string plv) {

    if(plv.size() > 7) return false;

    for(char c : plv) {
        if(isLetra(c)) return false;
    }

    cout << "numerica" << endl;
    return true;
}


bool isPlaca3(string plv) {

    if(plv.size() != 6) return false;

    for(int i=0;i<2;i++) {
        if(!isLetra(plv[i])) return false;
    }

    for(int i=2;i<6;i++) {
        if(isLetra(plv[i])) return false;
    }

    cout << "AA-9999" << endl;
    return true;
}

bool isPlaca4(string plv) {

    if(plv.size() != 7) return false;

    for(int i=0;i<3;i++) {
        if(!isLetra(plv[i])) return false;
    }

    for(int i=3;i<7;i++) {
        if(isLetra(plv[i])) return false;
    }

    cout << "AAA-9999" << endl;
    return true;
}

bool isMercosul(string plv) {

    if(plv.size() != 7) return false;

    for(int i=0;i<3;i++) {
        if(!isLetra(plv[i])) return false;
    }

    if(isLetra(plv[3]) || !isLetra(plv[4])) return false;

    for(int i=5;i<7;i++) {
        if(isLetra(plv[i])) return false;
    }

    cout << "Mercosul" << endl;
    return true;
}

int main() {

    string placa;

    cin >> placa;
    //dbg(placa);

    //cout << "Placa ";

    //bool valida=true;
    
    cout << "Placa ";
    if(!isPlacaAntiga(placa) && 
    !isPlacaNumerica(placa) &&
    !isPlaca3(placa) &&
    !isPlaca4(placa) &&
    !isMercosul(placa))
        cout << "invalida" << endl;
    //valida = (isPlacaAntiga(placa));

    //dbg(valida);

    //if(isPlacaAntiga(placa)) cout << 'muito antiga' << endl;
    /*isPlacaNumerica(placa);
    isPlaca3(placa);
    isPlaca4(placa);
    isMercosul(placa);*/

    return 0;
}