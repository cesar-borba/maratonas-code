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

queue<int> fila;
stack<int> pilha;
priority_queue<int> pq;

bool isFila = true;
bool isPilha = true;
bool isPQ = true;

void comandoPush(int b)
{
    fila.push(b);
    pilha.push(b);
    pq.push(b);
}

void comandoPop(int b)
{
    if (fila.front() != b && isFila)
    {
        isFila = false;
    }
    fila.pop();
    if (pilha.top() != b && isPilha)
    {
        isPilha = false;
    }
    pilha.pop();
    if (pq.top() != b && isPQ)
    {
        isPQ = false;
    }
    pq.pop();
}

int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            comandoPush(b);
        }
        else
        {
            comandoPop(b);
        }
    }

    if (isPilha)
        count++;
    if (isFila)
        count++;
    if (isPQ)
        count++;

    if (count > 1)
    {
        cout << "inconclusivo" << endl;
    }
    else
    {
        if (count == 0)
            cout << "nenhum" << endl;
        else
        {
            if (isPilha)
                cout << "pilha" << endl;
            if (isPQ)
                cout << "fila de prioridade" << endl;
            if (isFila)
                cout << "fila" << endl;
        }
    }

    return 0;
}