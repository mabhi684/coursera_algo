#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

long long binary_search(const vector<long long> &a, long long start,long long end,long long x) {
 // long long left = 0, right = (long long)a.size(); 
  //write your code here
  if(start>end)
    return -1;
  long long mid = 0;
  mid = (start+end)/2;
  if(a[mid]==x)
    return mid;
  else if(a[mid]>x)
    return binary_search(a,start,(mid-1),x);
  else
    return binary_search(a,(mid+1),end,x);

}

long long linear_search(const vector<long long> &a, long long x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  long long n;
  std::cin >> n;
  vector<long long> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  long long m;
  std::cin >> m;
  vector<long long> b(m);
  for (long long i = 0; i < b.size(); ++i) {
    std::cin >> b[i];
  }

  for (long long i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a,0,(a.size()-1),b[i]) << ' ';
  }
}
