#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here
  for (int i = 0; i < weights.size(); ++i)
  {
    for (int j = i; j < weights.size(); ++j)
    {
      if(float(values[i])/weights[i]<float(values[j])/weights[j])
      {
        int temp = 0;
        temp = values[i];
        values[i] = values[j];
        values[j] = temp;
        temp = weights[i];
        weights[i] = weights[j];
        weights[j] = temp;
      }
    }
  }
  // for (int i = 0; i < weights.size(); ++i)
  // {
  //    code 
  //   std::cout << values[i]<<std::endl;

  // }

  for (int i = 0; i < weights.size(); ++i)
  {
    /* code */
    if(weights[i]<=capacity && capacity!=0)
    {
      value = value+values[i];
      capacity = capacity - weights[i];
    }
    else
    {
      value = value + capacity*(float(values[i])/weights[i]);
      capacity = 0;
      return value;
    }
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
