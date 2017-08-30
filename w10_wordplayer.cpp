// "Copyright Hari 2016"
// AUTHOR hari chhari@bu.edu
// AUTHOR Abhishek Shanbhag anshan@bu.edu
// AUTHOR ameya apastamb ameyama@bu.edu
// AUTHOR Shreyas joshi svmjoshi@bu.edu

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <algorithm>

using std::vector;
using std::string;
using std::fstream;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::map;
map<int, vector<string>> dict;

int main(int argc, char const *argv[]) {
    string ina;
    int inb;
    string one;
    ifstream file1;
    file1.open(argv[1]);
    while (file1 >> one) {
        int i = one.size();
        dict[i].push_back(one);
    }
    file1.close();
    while (true) {
        cin >> ina >> inb;
        int ind = static_cast<int>(inb);
        if (ind == 0) {
            break;
        }
        int bro = ina.size();
        vector<char> letters;
        for (int a = 0; a < bro; a++) {
                letters.push_back(ina[a]);
        }
        int avail[26] = {0};

        for (int i = 0; i < letters.size(); i++) {
            int index = letters[i] - 'a';
            avail[index]++;
        }
        int n = dict[ind].size();
        vector<string> result;
        for (int l = 0; l < n; l++) {
            int count[26] = {0};
            bool ok = true;
            string fk;
            fk = dict[ind][l];
            for (int c = 0; c < fk.size(); c++) {
                int index = fk[c] - 'a';
                count[index]++;

                if (count[index] > avail[index]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                result.push_back(fk);
            }
        }
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << endl;
        }
        cout << '.' << endl;
    }
}

