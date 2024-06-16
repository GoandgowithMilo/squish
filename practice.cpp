#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {

    unordered_map<string, int> umap;

    umap["test1"] = 10;
    umap["test2"] = 20;
    umap["test3"] = 30;

    for (auto x : umap) {
        cout << x.first << " = " << x.second << endl;
    }


    return 0;
}
