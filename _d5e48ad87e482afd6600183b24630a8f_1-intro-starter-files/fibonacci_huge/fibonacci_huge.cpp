#include <iostream>

uint64_t get_fibonaccihuge(uint64_t n, uint64_t m) {
  //write your code here
	uint64_t arr[n];
	arr[0] = 0;
	arr[1] = 1;
    if (n <= 1)
        return n%m;

    for(uint64_t i = 2;i<=n;i++)
    	arr[i] = (arr[i-1]+arr[i-2]);
    return arr[n]%m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonaccihuge(n, m) << '\n';
}
