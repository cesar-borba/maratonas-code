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

int main() { _

    string seq="";

    // dbg(seq);

    while(seq!="*") {
        getline(cin, seq);
        // dbg(seq);
        vector<string> vec;
        string valor;
        istringstream ss(seq);

        while(ss >> valor) {
            vec.pb(valor);
            // dbg(valor);
        }

        // for(string st : vec) dbg(st);

        reverse(vec.begin(), vec.end());

        // for(string st : vec) dbg(st);

        // dbg((int)vec.size());

        // dbg(pow(20, 2));

        long long total=0;

        for (int i = 0; i < (int)vec.size(); i++)
        {
            long long mult=pow(20,i);
            long long sum=0;
            for (int j = 0; j < vec[i].length(); j++)
            {
                if(vec[i][j] == '.') sum+=1;
                if(vec[i][j] == '-') sum+=5;
                if(vec[i][j] == '*') sum+=0;
            }
            // dbg(sum);
            total+=mult*sum;
            // dbg(total);
            //print(total);
        }

        print(total);
        //if(seq=="*") cout << 0 << endl;

    }

    return 0;
}
