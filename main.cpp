#include <iostream>
#include <assert.h>
#include "HashMap.h"
using namespace std;

int main() {
    HashMap<int, int> H;
    H.add(3, 4);
    H.add(3, 5);
    H.add(976, 10);
    HashMap<int, int> h1;
    h1 = H;
    cout << h1;
    vector<int> aux = H.getValuesByKey(3);
    assert(*aux.begin() == 4 && *(aux.begin()+1) == 5 && aux.size() == 2);
    assert(H[3] == 4);
    assert(H.getNoOfKeys() == 2);
    H.remove(3, 4);
    assert(H.getValuesByKey(3).size() == 1 && *H.getValuesByKey(3).begin() == 5);
    assert(H.search(976, 10));
    H.remove(3);
    assert(!H.search(3));
    HashMap<int, int> h(H);
    cout << h;
    return 0;
}
