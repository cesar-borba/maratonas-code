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

//Letra/Num: Problema K / nº 11
//Nome: Mentirinha

using namespace std;

int main() {

    int n, div=0;

    cin >> n;

    bool mentira = true;
    
    if(n==1) mentira=false;
    else {
        for(int i=1; i<=n; i++) {
            if(n%i==0) div++;
        }
        if(div>3 || div<3) mentira=false;
    }

    if(mentira) cout << "sim" << endl;
    else cout << "nao" << endl;

    return 0;
}