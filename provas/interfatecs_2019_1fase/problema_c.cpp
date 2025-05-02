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

bool temCaracEspecial(char c) {
    string seq = ".,!?;: ééíóúâêôãàçÁÉíóõÚÃÔÔÀÇ";
    return seq.find(c) != string::npos;
}

bool temParConsecutivo(string &seq) {
    for(int i=0; i<seq.size()-1; i++) {
        if((isupper(seq[i]) && isupper(seq[i+1]) && seq[i+1] == seq[i]+1) ||
           (isdigit(seq[i]) && isdigit(seq[i+1]) && seq[i+1] == seq[i]+1) ||
           (islower(seq[i]) && islower(seq[i+1]) && seq[i+1] == seq[i]+1))
           return true;
    }
    return false;
}

int main() { _

    string seq;

    bool upper = false, lower = false, digit = false;

    getline(cin, seq);

    //dbg(seq.length());

    if (seq.length() < 6 || seq.length() > 15) {
        cout << "False.\n";
        return 0;
    }

    for(int i=0; i<seq.length(); i++) {
        if(temCaracEspecial(seq[i])){
           cout << "False.\n";
           return 0;
           }
        if(isupper(seq[i])) upper=true;
        else if(islower(seq[i])) lower=true;
        else if(isdigit(seq[i])) digit=true;
    }

    if (!upper || !lower || !digit) {
        cout << "False.\n";
        return 0;
    }

    if(temParConsecutivo(seq)) {
        cout << "False.\n";
        return 0;
    }

    cout << "True.\n";

    return 0;
}

//- length(() 6-15
//- tem paresconsecutivos
//- tem caracteres especiais
//- upper / digit / lower
//- isupper()
