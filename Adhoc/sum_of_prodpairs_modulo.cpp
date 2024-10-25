#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    int mod = 1000000007;
    
    long long totalSum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        totalSum += A[i];
        totalSum %= mod;
    }
    
    long long answer = 0;
    for (int i = 0; i < N; i++) {
        // Subtract the current element to get the sum after index i
        totalSum -= A[i];
        if (totalSum < 0) totalSum += mod;
        
        // Add the contribution from the current element
        answer += A[i] * totalSum;
        answer %= mod;
    }
    
    cout << answer << endl;
    return 0;
}