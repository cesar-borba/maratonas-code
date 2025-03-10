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

//Letra/Num: Problema B / nº 02
//Nome: Teclado

using namespace std;

int main() { _

    //A 65 - O 79
    
    //char c;

    //cin >> c;

    int n;

    cin >> n;

    vector<string> v;

    while(n--) {
        string plv;
        cin >> plv;
        cin.ignore();
        v.push_back(plv);
    }

    //cout << int(c) << endl;

    for(string plv : v) {
        for(char c : plv) {
            if(c>='A' && c<='O')
                cout << ((c-65)/3)+2;
            else if (c>='P' && c<= 'S')
                cout << 7;
            else if (c>='T' && c<= 'V')
                cout << 8;
            else
                cout << 9;
        }
        cout << endl;
    }

    //cout << ((79-64)/3)+1;
    //ABCDEFGHIJKLMNOPQRSTUVWXYZ
    return 0;
}