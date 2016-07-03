#include <iostream>
#include <cassert>
#include <vector>

# define bool long long
  
long long findCandidate(long long *, long long);
bool isMajority(long long *, long long, long long);
  
/* Function to print Majority Element */
void printMajority(long long a[], long long size)
{
  /* Find the candidate for Majority*/
  long long cand = findCandidate(a, size);
  
  /* Print the candidate if it is Majority*/
  if(isMajority(a, size, cand))
    printf("1");
  else
    printf("0");
}
  
/* Function to find the candidate for Majority */
long long findCandidate(long long a[], long long size)
{
    long long maj_index = 0, count = 1;
    long long i;
    for(i = 1; i < size; i++)
    {
        if(a[maj_index] == a[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
  
/* Function to check if the candidate occurs more than n/2 times */
bool isMajority(long long a[], long long size, long long cand)
{
    long long i, count = 0;
    for (i = 0; i < size; i++)
      if(a[i] == cand)
         count++;
    if (count > size/2)
       return 1;
    else
       return 0;
}
  
 int main() {
  long long n;
  std::cin >> n;
  long long a[n];
  for (size_t i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  long long size = (sizeof(a))/sizeof(a[0]);
    printMajority(a, size);
}
