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

//Letra/Num: Problema C / nº 03
//Nome: Vacina

int main() { _

    string seq1, seq2, seq3;
    int len, numCadeias = 0;

    cin >> seq1 >> seq2 >> seq3 >> len;

    for(int i=0; i<=seq1.length()-len; i++) {
        string cadeia = seq1.substr(i,len);
        if (seq2.find(cadeia) != string::npos && seq3.find(cadeia) != string::npos) numCadeias++;
    }

    print(numCadeias);

    return 0;
}
