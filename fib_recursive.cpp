#include <iostream>
#include <vector>
#include <numeric>

// mozemy zwracac konstrukcje

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int number = 0;

    cout << "Type in how many elements of Fibonacci sequence would you like to display: ";
    cin >> number;

    vector <int> myvector;

    for (int i = number; i > 0; i--)
    {
        number--;
        myvector.push_back(fib(number));
    }

    std::cout << "Fibonacci sequence up to its " << number << "th element: ";

      for (auto it = myvector.rbegin(); it != myvector.rend(); ++it)
   {
       cout << *it << " ";
   }

   cout << ". " << endl;

   cout << "Sum of above listed elements: " << accumulate(myvector.begin(), myvector.end(), 0) << ". ";

    return 0;
}


