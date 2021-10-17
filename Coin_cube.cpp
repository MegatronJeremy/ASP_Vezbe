#include <bits/stdc++.h>
#include <random>
using namespace std;

void init_coin(unsigned long seed) {
    srand(seed);
}

int coin() {
    double i = (double) rand() / RAND_MAX;
    if (i < 0.5) return 0;
    else return 1;
}

int cube() {
    int i = coin();
    i = (i<<1) + coin();
    i = (i<<1) + coin();
    if (i >= 6) return cube();
    else return i + 1;
}

int main() {
    init_coin(time(nullptr));
    int k;
    for (int i = 0; i < 6; i++)
        k = cube(), cout << k << " ";
    return 0;
}
