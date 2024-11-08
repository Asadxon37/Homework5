#include <iostream>
using namespace std;

int calculus(string word);
int main() {
    string word;
    cin >> word;
    int up=0;
    int down=0;
    string upper=" ";
    string lower=" ";
    for (int i=0; i<(word.length());i++) {
        if (word.at(i)>=65 && word.at(i)<=90) {
            up++;
           upper+=word.at(i);
           upper+=" ";
        }
    }
    cout<<endl;
    for (int i=0; i<(word.length());i++) {
        if (word.at(i)>=97 && word.at(i)<=122) {
            down++;
            lower+=word.at(i);
            lower+=" ";
        }
    }
    cout<<up<<upper<<endl;
    cout<<down<<lower<<endl;
}