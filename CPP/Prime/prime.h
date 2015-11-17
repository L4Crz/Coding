#include <math.h>
#include <iostream>

void EratosthenesSieve(unsigned int n) {
      bool* isPrime = new bool[n];
      memset(isPrime, 1, sizeof(bool) * n);
      unsigned int nSquareRoot = (unsigned int)sqrt(n);
			for (int i = 2; i <= nSquareRoot; ++i)
            if (isPrime[i])
                  for (int k = i * i; k <= n; k += i)
                        isPrime[k] = false;

      for (int i = 2; i < n; ++i)
            if (isPrime[i])
                  std::cout << i << std::endl;

      delete[] isPrime;
}
