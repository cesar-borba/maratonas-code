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

//Letra/Num: Problema I / nº 09
//Nome: Enchendo Linguiça

using namespace std;

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

    int n, type=0;
    vector<int> filaP;
    cin >> n;

    for(int i=0; i<n;i++) {
        int a;
        cin >> a;
        filaP.push_back(a);
    }
    
    //conferência minHeap
    if(isMinHeap(filaP)) type=1;

    //conferência maxHeap
    else if(isMaxHeap(filaP)) type=2;
    
    cout << type << endl;


    return 0;
}