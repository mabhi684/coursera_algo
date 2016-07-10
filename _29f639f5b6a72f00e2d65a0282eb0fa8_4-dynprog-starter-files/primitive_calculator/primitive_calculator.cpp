#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

// vector<int> optimal_sequence(int n) {
//   std::vector<int> sequence;
//   while (n >= 1) {
//     sequence.push_back(n);
//     if (n % 3 == 0) {
//       n /= 3;
//     } else if (n % 2 == 0) {
//       n /= 2;
//     } else {
//       n = n - 1;
//     }
//   }
//   reverse(sequence.begin(), sequence.end());
//   return sequence;
// }
int optimal_sequence(int n) {
  std::vector<int> sequence;
  int a2,a3 = -1;

  if(n==1)
    return 0;
 std::cout<<optimal_sequence(n/2);
 return n;
 
 /*
 if(n%2 == 0)
 a2 = optimal_sequence(n/2);
if(n%3 == 0)
  a3 = optimal_sequence(n/3);
  */
}

int main() {
  int n;
  std::cin >> n;
  int x = optimal_sequence(n);
  // for (size_t i = 0; i < sequence.size(); ++i) {
  //   std::cout << sequence[i] << " ";
  // }

}
