#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void simpleSieve(int limit, vector<int>& primes)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int p=2; p*p <= limit; ++p)
    {
        if(isPrime[p])
        {
            for(int i = p*p; i <= limit; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for(int p=2; p <= limit; ++p)
    {
        if(isPrime[p])
        {
            primes.push_back(p);
        }
    }
}

void segmentedSieve(int L, int R)
{
    int limit = static_cast<int>(sqrt(R)) + 1;
    vector<int> primes;
    simpleSieve(limit, primes);

    int n = R - L + 1;
    vector<bool> isPrime(n, true);

    for(int i = 0; i < primes.size(); ++i)
    {
        if(isPrime[i])
        {
            cout << i + L << " ";
        }
    }
    cout << endl;
}

int main()
{
    int L, R;
    cout << endl << "Enter the range [L, R]: ";
    cin >> L >> R;
    cout << endl;

    cout << endl << "Prime numbers in the range[" << L << ", " << R << "]:\n";
    segmentedSieve(L, R);

    cout << endl;
    return 0;
}