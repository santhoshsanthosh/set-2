#include <bits/stdc++.h>
using namespace std;
 
int countOddSquares(int n, int m)
{
   return (int)pow(m,0.5) - (int)pow(n-1,0.5);
}
 
// Driver code
int main()
{
    int n = 5, m = 100;
    cout << "Count is " << countOddSquares(n, m);
    return0;
    }
