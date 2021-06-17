#include <iostream>
using namespace std;
int main()
{
int num = 1;
while (num <= 500) {
num++;
if (num % 5 == 0) {
  cout << num << "\n";
}
}
}
