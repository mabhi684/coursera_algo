#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

long long min_dot_product(vector <long long> a, vector <long long> b) {
  // write your code here
  long long result = 0;
  for (long long i = 0; i < a.size(); ++i)
  {
    for (long long j = i; j < a.size(); ++j)
    {
              

      if(a[i]<a[j])
      {
       long long temp = 0;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        
      }
      if(b[i]>b[j])
      {
       long long temp = 0;
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        
      }
    }
  }
  for (long long i = 0; i < a.size(); i++) {
    result += a[i] * b[i];
  }
  return result;
}

int main() {
 long long n;
  std::cin >> n;
  vector <long long> a(n), b(n);
  for (long long i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (long long i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << min_dot_product(a, b) << std::endl;
}
