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

bool isSerpente(int n)
{
    return (((n + 3) % 12) == 0);
}

bool isDourado(int n)
{
    return (((n + 5) % 7) == 0);
}

int main()
{
    int n, count = 0;
    cin >> n;

    while (n--)
    {
        int ano;
        cin >> ano;
        if (isSerpente(ano) && isDourado(ano))
            count++;
    }

    cout << count << endl;

    return 0;
}