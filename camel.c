#include <string> 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string text, cc="";
    bool lastSpace = true;
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), (int (*)(int))tolower);
    for (int i=0; i<text.size(); i++)
        if (isalpha(text[i])) {
            if (lastSpace)
                cc += toupper(text[i]);
            else
                cc += text[i];
            lastSpace = false;
        }
        else {
            lastSpace = true;        
        }
    cout << cc << endl;
    return 0;
}
