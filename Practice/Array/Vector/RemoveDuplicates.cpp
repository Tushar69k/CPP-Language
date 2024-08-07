#include<iostream>
#include<vector>
using namespace std;

void Remove(vector<int>& v) {
    int i , j;
    if (v.size() != 1) {
        i = 0;
        j = 1;
        while (j < v.size()) {
            if (v[i] == v[j]) {
                v.erase(v.begin() + j);
            }
            else {
                j++;
                i++;
            }
        }
    }
}



int main() {
    vector<int> v = { 0,0,1,1,1,2,2,3,3,4 };

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " | ";
    }

    Remove(v);

    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " | ";
    }

    return 0;
}