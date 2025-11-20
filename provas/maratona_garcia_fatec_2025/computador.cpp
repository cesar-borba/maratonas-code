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

vector<int> vec;

bool isPosicao(int n)
{
    return (n < (int)vec.size());
}

bool isOpcode(int i)
{
    return (i % 4 == 0);
}

int main()
{
    int result;
    bool soma;
    string str, num;

    cin >> str;

    stringstream ss(str);

    while (getline(ss, num, ','))
    {
        vec.pb(stoi(num));
    }

    for (int i = 0; i < vec.size(); i++)
    {
        if (isOpcode(i))
        {
            if (vec[i] == 1)
            {
                soma = true;
                result = 0;
            }
            else if (vec[i] == 2)
            {
                soma = false;
                result = 1;
            }
            else if (vec[i] == 99)
            {
                break;
            }
            else
            {
                vec[0] = -1;
                break;
            }
        }
        else
        {
            if (!isPosicao(vec[i]))
            {
                vec[0] = -1;
                break;
            }
            else if ((i - 1) % 4 == 0)
            {
                if (soma)
                    result += vec[vec[i]];
                else
                    result *= vec[vec[i]];
            }
            else if ((i - 2) % 4 == 0)
            {
                if (soma)
                    result += vec[vec[i]];
                else
                    result *= vec[vec[i]];
            }
            else if ((i - 3) % 4 == 0)
                vec[vec[i]] = result;
        }
    }

    cout << vec[0] << endl;

    return 0;
}