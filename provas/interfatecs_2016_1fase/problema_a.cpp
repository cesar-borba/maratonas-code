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

using namespace std;

//Letra/Num: Problema A / nº 01
//Nome: Marqueenho

int main() { _

    int marquee, len, tempo, ponteiro;
    string seq;

    //cin >> marquee >> len;

    while(cin >> marquee >> len) {
        cin.ignore();
        getline(cin, seq);
        cin >> tempo;
        ponteiro=0;
        // dbg(marquee);
        // dbg(seq);
        // dbg(len);
        // dbg(tempo);
        if(marquee < len) {
            for (int i = 0; i < tempo; i++)
            {
                ponteiro++;
                if(ponteiro == len) ponteiro=0;
            }
            for (int i = 0; i < marquee; i++)
            {   
                //dbg(ponteiro);
                if(ponteiro==len) ponteiro=0;
                cout << seq[ponteiro];
                ponteiro++;
            }

            cout << "\n";
        }

        else cout << seq << "\n";
    
    }

    return 0;
}