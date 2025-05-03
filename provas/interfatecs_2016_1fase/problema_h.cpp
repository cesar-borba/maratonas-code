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

//Letra/Num: Problema H / nº 08
//Nome: Heap, heap!

bool isMinHeap(const vector<int>& heap) {
    int n = heap.size();
    for (int i=0; i < n/2; i++) {
        int left = 2*i + 1;
        int right = 2*i +2;
        if (left < n && heap[i] > heap[left]) return false;
        if (right < n && heap[i] > heap[right]) return false;
    }
    return true;
}

bool isMaxHeap(const vector<int>& heap) {
    int n = heap.size();
    for (int i=0; i < n/2; i++) {
        int left = 2*i + 1;
        int right = 2*i +2;
        if (left < n && heap[i] < heap[left]) return false;
        if (right < n && heap[i] < heap[right]) return false;
    }

    return true;
}

int main() { _

    //EOF

    int n;

    while(cin >> n) {
        vector<int> heap;
        while(n--) {
            int a;
            cin >> a;
            heap.pb(a);
        }
        if(isMinHeap(heap)) cout << "min\n";
        else if (isMaxHeap(heap)) cout << "max\n";
        else cout << "nada\n";
    }

    return 0;
}
