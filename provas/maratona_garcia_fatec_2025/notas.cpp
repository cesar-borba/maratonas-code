#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
// #define _                         \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main()
{
    int n;
    vector<int> vec;

    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        while (a--)
        {
            int b;
            cin >> b;
            vec.pb(b);
        }
    }

    sort(vec.begin(), vec.end(), greater<>());

    bool space = false;
    for (int n : vec)
    {
        if (!space)
        {
            cout << n;
            space = true;
        }
        else
            cout << " " << n;
    }

    cout << endl;

    return 0;
}