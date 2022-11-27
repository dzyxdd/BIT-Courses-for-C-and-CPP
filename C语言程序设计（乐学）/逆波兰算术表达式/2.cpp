#include <stack>
#include <string>
#include <iostream>

int calculate(int a, int b, char c) {
    switch (c) {
        case '+':return a + b;
        case '-':return a - b;
        case '*':return a * b;
        case '/':return a / b;
    }
}

int main() {
    std::string s;
    std::stack<int>st;
    while (std::cin >> s) {
        if (s[0] >= '0' && s[0] <= '9')
            st.push(std::stoi(s));
        else {
            auto temp1 = st.top(); st.pop();
            auto temp2 = st.top(); st.pop();
            st.push(calculate(temp1, temp2, s[0]));
        }
    }
    std::cout << st.top() << "\n";
}