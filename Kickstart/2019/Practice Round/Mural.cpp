#include <iostream>
#include <string>
using namespace std;
int main() {
    int num_test_cases;
    cin >> num_test_cases;
    for (int tt = 0; tt < num_test_cases; ++tt) {
        cout<<"Case #"<<tt<<": ";
        int n;
        cin>>n;
        int num_tries;
        std::cin >> num_tries;
        int head = lo + 1, tail = hi;
        while (true) {
            int m = (head + tail) / 2;
            std::cout << m << std::endl;
            std::string s;
            std::cin >> s;
            if (s == "CORRECT") break;
            if (s == "TOO_SMALL")
                head = m + 1;
            else
                tail = m - 1;
        }
        cout<<'\n';
    }
    return 0;
}
