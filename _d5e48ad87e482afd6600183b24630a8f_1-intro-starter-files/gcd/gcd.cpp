#include <iostream>

int gcd(int a, int b) {
  //write your code here
  if(b==0)
    return a;
  else
  {
    return gcd(b,a%b);
  }
}

int main() {
  int a, b;
  std::cin >> a >> b;
  if(a<b)
  {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
  }
  std::cout << gcd(a, b) << std::endl;
  return 0;
}
