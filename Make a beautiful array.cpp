/*#include<iostream>
using namespace std;

int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int n;
        cin >> n;
        int a[n],s=0;
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        if(a[0]>a[1]){
            cout << "Case " << i << ": " << -1 << endl;
        }
        else{
            int c=1,cnt=1;
            for(int j=0;j<n;j++){
                if(a[j]<a[j+1]){
                    c++;
                }
                else if(a[j]>a[j+1]){
                    cnt++;
                }
                if(c==cnt){
                    s=c+cnt-1+s;
                    c=1;
                    cnt=1;
                }
                else{
                    continue;
                }
            }
            cout << "Case " << i << ": " << s << endl;
        }
    }
    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxBeautyFactor(const vector<int>& A) {
    int n = A.size();
    if (n < 3) {
        return -1; // Array must have at least 3 elements
    }

    vector<int> potential_peaks;
    vector<int> potential_troughs;

    int inc_ptr = 1, dec_ptr = n - 2;

    while (inc_ptr < dec_ptr) {
        // Identify potential peaks and troughs
        if (A[inc_ptr] > A[inc_ptr - 1] && A[dec_ptr] < A[dec_ptr + 1]) {
            potential_peaks.push_back(A[inc_ptr]);
            potential_troughs.push_back(A[dec_ptr]);
        } else if (A[inc_ptr] < A[inc_ptr - 1] && A[dec_ptr] > A[dec_ptr + 1]) {
            potential_peaks.push_back(A[dec_ptr]);
            potential_troughs.push_back(A[inc_ptr]);
        }

        inc_ptr++;
        dec_ptr--;
    }

    if (potential_peaks.empty() || potential_troughs.empty()) {
        return -1; // No valid beautiful array possible
    }

    vector<int> B;
    int n_peaks = 0;

    while (!potential_peaks.empty() || !potential_troughs.empty()) {
        // Choose the smaller element from the appropriate list
        int next_element;
        if (B.empty() || B.back() < potential_troughs.front()) {
            next_element = potential_troughs.front();
            potential_troughs.erase(potential_troughs.begin());
        } else {
            next_element = potential_peaks.front();
            potential_peaks.erase(potential_peaks.begin());
            n_peaks++;
        }

        // Skip duplicate elements (consecutive peaks or troughs)
        if (B.size() > 0 && B.back() == next_element) {
            continue;
        }

        // Add the element to the beautiful array
        B.push_back(next_element);

        // Ensure both lists are processed fully, even if one becomes empty earlier
        if (potential_peaks.empty()) {
            move(potential_troughs.begin(), potential_troughs.end(), back_inserter(potential_peaks));
            potential_troughs.clear();
        } else if (potential_troughs.empty()) {
            move(potential_peaks.begin(), potential_peaks.end(), back_inserter(potential_troughs));
            potential_peaks.clear();
        }
    }

    return B.size() / n_peaks; // Calculate beauty factor
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int j = 0; j < n; j++) {
            cin >> A[j];
        }

        int beauty_factor = maxBeautyFactor(A);
        cout << "Case " << i << ": " << beauty_factor << endl;
    }

    return 0;
}

