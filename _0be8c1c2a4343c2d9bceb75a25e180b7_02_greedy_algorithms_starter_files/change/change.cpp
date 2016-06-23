#include <iostream>

int get_change(int n) {
  //write your code here
	int count = 0;
	count = (n/10)+((n%10)/5)+(((n%10)%5)/1);
  return count;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}
