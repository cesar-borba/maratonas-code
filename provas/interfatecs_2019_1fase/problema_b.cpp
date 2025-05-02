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

//Letra/Num: Problema B / nº 02
//Nome: Balas Dumbinho

int main() { _
    string seq;
    int num;

    cin >> seq;

    for (char c : seq) {
        num += c - '0'; //conversão de char para int
    }
    //dbg(num);
    if (num%2 == 1) cout << "8-bonito" << endl;
    else cout << "dumbinho" << endl;
    return 0;
}