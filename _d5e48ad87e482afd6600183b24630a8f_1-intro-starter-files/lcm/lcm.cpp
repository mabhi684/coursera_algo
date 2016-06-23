#include <iostream>

uint64_t lcm(uint64_t a,uint64_t b) {
  //write your code here
	//write your code here
  if(b==0)
    return a;
  else
  {
    return lcm(b,a%b);
  }

}

int main() {
  uint64_t a, b;
  std::cin >> a >> b;
  if(a<b)
  {
    uint64_t temp = 0;
    temp = a;
    a = b;
    b = temp;
  }
  uint64_t  c = (a*b)/(lcm(a,b));
  std::cout << c << std::endl;
  return 0;
}
