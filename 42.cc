#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string filename = "42.txt";

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file\n";
        return 1;
    }

    file.seekg(0, ios::end);
    int length = file.tellg();
    file.seekg(0, ios::beg);
    cout << "File length: " << length << " bytes\n";

    string word;
    int count = 0;
    while (file >> word) {
        count++;
    }
    cout << "Number of words: " << count << endl;

    file.close();
    return 0;
}
