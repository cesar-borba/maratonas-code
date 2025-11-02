#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
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
    vector<string> nums;
    // mudar delimitadores se precisar
    char *p, *str;
    cin >> str;
    for (p = strtok(str, ","); p; p = strtok(NULL, ","))
    {
        nums.push_back(p);
        // casting from C string to C++ strins is automatic
    }

    int a = stoi(nums[0]);
    int b = stoi(nums[1]);
    int c = stoi(nums[2]);
    int d = stoi(nums[3]);
    int e = stoi(nums[4]);
    int f = stoi(nums[5]);

    int det = (((a * c * f) + (b / 2 * e / 2 * d / 2) + (d / 2 * b / 2 * e / 2)) - ((d / 2 * d / 2 * c) + (e / 2 * e / 2 * a) + (b / 2 * b / 2 * f)));
    int d11 = (c * f) - (e / 2 * e / 2);
    int d22 = (a * f) - (d / 2 * d / 2);
    int d33 = (a * c) - (b / 2 * b / 2);
    int t = a + c;

    if (d33 > 0)
    {
        if (det == 0)
        {
            cout << "Um ponto" << endl;
        }
        else
        {
            if ((t * det) > 0)
                cout << "Conjunto vazio" << endl;
            else
            {
                if (a == c && b == 0)
                {
                    cout << "Circunferência" << endl;
                }
                else
                {
                    cout << "Elipse" << endl;
                }
            }
        }
    }
    else if (d33 < 0)
    {
        if (det == 0)
            cout << "Duas retas concorrentes" << endl;
        else
            cout << "Hipérbole" << endl;
    }
    else
    {
        if (det != 0)
            cout << "Parábola" << endl;
        else
        {
            if ((d11 + d22) > 0)
                cout << "Conjunto vazio" << endl;
            else if ((d11 + d22) < 0)
                cout << "Duas retas paralelas" << endl;
        }
    }

    // cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
    // cout << a + b + c + d + e + f << endl;
    // sort(tokens.begin(), tokens.end());

    return 0;
}

// vector<string> tokenize(const char *str)
// {
//     vector<string> tokens;
//     map<string, int> freq;
//     // mudar delimitadores se precisar
//     for (p = strtok(str, "[]. "); p; p = strtok(NULL, "[]. "))
//     {
//         tokens.push_back(p);s
//         // casting from C string to C++ strins is automatic
//         freq[p]++;
//     }
//     // sort(tokens.begin(), tokens.end());
//     return tokens;
// }

vector<string> tokenize(char *str)
{
    vector<string> tokens;
    map<string, int> freq;
    // mudar delimitadores se precisar
    char *p;
    for (p = strtok(str, "[]. "); p; p = strtok(NULL, "[]. "))
    {
        tokens.push_back(p);
        // casting from C string to C++ strins is automatic
        freq[p]++;
    }
    // sort(tokens.begin(), tokens.end());
    return tokens;
}