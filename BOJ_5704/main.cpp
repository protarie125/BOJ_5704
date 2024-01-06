#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string s;
  getline(cin, s);
  while (s != "*") {
    auto mem = vi(26, 1);
    auto ans = 0;
    for (auto i = 0; i < s.length(); ++i) {
      if ('a' <= s[i] && s[i] <= 'z') {
        if (1 == mem[s[i] - 'a']) {
          mem[s[i] - 'a'] = 0;
          ++ans;
        }
      }
    }
    cout << (26 == ans ? "Y" : "N") << '\n';

    getline(cin, s);
  }

  return 0;
}