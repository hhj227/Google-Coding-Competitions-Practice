#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num_test_cases;
    cin >> num_test_cases;
    for (int tt = 1; tt <= num_test_cases; ++tt) {
        cout<<"Case #"<<tt<<": ";
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i=0; i<n; i++) {
            cin>>v1[i];
        }
        for (int i=0; i<n; i++) {
            cin>>v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        long long ret = 0;
        for (int i=0; i<n; i++) {
            ret += (long long)(v1[i])*v2[i];
        }
        cout<<ret<<'\n';
    }
    return 0;
}
