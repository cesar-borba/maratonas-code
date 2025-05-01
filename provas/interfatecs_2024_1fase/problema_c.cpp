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

//Letra/Num: Problema C / nº 03
//Nome: Calcetis

using namespace std;

int main() {

    int v, n, aux;
    vector<int> carr;
    bool fretegratis=false;

    cin >> v >> n;

    aux=n;

    while(aux--) {
        int a;
        cin >> a;
        carr.push_back(a);
    }

    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                int soma=carr[i]+carr[j]+carr[k]+v;
                /*dbg(carr[i]);
                dbg(carr[j]);
                dbg(carr[k]);
                dbg(v);
                dbg(soma);
                cout << endl;*/
                if(soma==200) {
                    fretegratis=true;
                    break;
                }
            }
            if(fretegratis)
                break;
        }
        if(fretegratis)
            break;   
    }

    if(fretegratis)
        cout << "fretegratis" << endl;
    else
        cout << "fretepago" << endl;

    return 0;
}