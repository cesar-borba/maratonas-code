#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main()
{
    string str;
    int count = 0;

    cin >> str;

    for (char c : str)
    {
        if (c < 'A' || c > 'z')
            count++;
    }

    cout << count << endl;

    return 0;
}