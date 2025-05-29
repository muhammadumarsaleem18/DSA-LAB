#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <cstring>
#include <conio.h>

using namespace std;

const int SIZE = 100;

int arrayA[] = { 1, 2, 3 };
int arrayB[] = { 2, 3, 4 };
vector<int> mergedResult(10);
int bufferA[10];
int bufferB[10];
int numbers[] = { 1, 2, 3, 4, 5 };

// Custom string wrapper
class myString {
    char* text;
public:
    myString() : text(nullptr) {}
    myString(const char* input) {
        text = strdup(input);
        assert(text);
    }
    bool operator<(const myString& rhs) const {
        return strcmp(text, rhs.text) < 0;
    }
    operator char* () { return text; }
};

int main() {
   
    // Example 1: Shuffling numbers in a vector
    vector<int> data;
    for (int n = 0; n < 25; ++n)
        data.push_back(n);

    random_shuffle(data.begin(), data.end());

    for (auto val : data)
        cout << val << " ";
    cout << "\n";
    getch();

    
    // Example 2: Reversing using list
    list<int> values;
    for (int i = 0; i < 25; ++i)
        values.push_back(i);

    while (!values.empty()) {
        cout << values.back() << " ";
        values.pop_back();
    }
    cout << "\n";
    getch();




    // Example 3: Random deque usage
    deque<int> dq;
    for (int i = 0; i < 25; ++i)
        dq.push_back(i);

    random_shuffle(dq.begin(), dq.end());

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << "\n";
    getch();




    // Example 4: Stack with list container
    stack<int, list<int>> stk;
    for (int i = 1; i <= 10; ++i)
        stk.push(i);

    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
    getch();




    // Example 5: Bitwise NOT on bitset
    bitset<16> bits1("1011011110001011");
    bitset<16> bits2 = ~bits1;

    for (int i = bits2.size() - 1; i >= 0; --i)
        cout << bits2[i];
    cout << "\n";





    // Example 6: Finding a value
    vector<int> store(SIZE);
    store[50] = 37;
    auto found = find(store.begin(), store.end(), 37);
    if (found != store.end())
        cout << "found at " << (found - store.begin()) << "\n";
    else
        cout << "not found\n";
    getch();





    // Example 7: Union of two sets
    auto pos = mergedResult.begin();
    auto finalIt = set_union(arrayA, arrayA + 3, arrayB, arrayB + 3, pos);

    while (pos != finalIt)
        cout << *pos++ << " ";
    cout << "\n";
    getch();

  
    
    
    
    // Example 8: Fill arrays
    fill(bufferA, bufferA + 10, -1);
    for (int x : bufferA) cout << x << " ";
    cout << "\n";

    fill_n(bufferB, 5, -1);
    for (int y : bufferB) cout << y << " ";
    cout << "\n";
    getch();





    // Example 9: Accumulate sum and product
    int total = accumulate(numbers, numbers + 5, 0);
    cout << total << "\n";

    int result = accumulate(numbers, numbers + 5, 1, multiplies<int>());
    cout << result << "\n";
    getch();





    // Example 10: Shuffle string array
    char* words[] = {"epsilon", "omega", "theta", "rho", "alpha", "beta", "phi", "gamma", "delta"};
    const int W = sizeof(words) / sizeof(char*);
    vector<myString> strVec;

    for (int i = 0; i < W; ++i)
        strVec.push_back(myString(words[i]));

    random_shuffle(strVec.begin(), strVec.end());

    for (auto& word : strVec)
        cout << word << " ";
    cout << "\n";
    getch();
    

    return 0;
}
