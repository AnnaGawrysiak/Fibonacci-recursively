#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector <int> fib(int number, int size)
{
   static int counter = 0;
   counter ++;

   static long long a = 0, b = 1;

   static vector <int> fib_vector;

   if(counter == size)
        return fib_vector;

    fib_vector.push_back(b);
    b += a;
    a = b-a;

    return fib(b, size);
}

int main()
{
    int number = 0;

    cout << "Type in how many elements of Fibonacci sequence would you like to display: ";
    cin >> number;

    vector <int> myvector = fib(number, number);

    std::cout << "Fibonacci sequence up to its " << number << "th element: ";

      for (int i = 0; i < myvector.size(); i++)
   {
       cout << myvector[i] << " ";
   }

   cout << ". " << endl;

   cout << "Sum of above listed elements: " << accumulate(myvector.begin(), myvector.end(), 0) << " . ";

    return 0;
}


