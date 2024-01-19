#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;
    for (char c : str) {
        switch (c) {
            case '{':  // {[( 
            case '[':
            case '(':
                s.push(c);
                break;
            case '}':
                if (s.empty() || s.top() != '{') return false;
                else s.pop();
                break;
            case ']':
                if (s.empty() || s.top() != '[') return false;
                else s.pop();
                break;
            case ')':
                if (s.empty() || s.top() != '(') return false;
                else s.pop();
                break;
            default:
                break;
        }
    }
    return s.empty();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        if (isBalanced(str)) cout << "TRUE" << endl;
        else cout << "FALSE" << endl;
    }
    return 0;
}
