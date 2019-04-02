#include <iostream>
using namespace std;

int main()
{
  int bil;
  cout <<"Masukkan nilai: ";
  cin >> bil;
  if (bil==80) {
    cout << "Nilai " << bil << " = A";
  } else if (bil==50) {
    cout << "Nilai " << bil << " = B";
  } else if (bil==10) {
    cout << "Nilai " << bil << " = C";
  } else if (bil==0) {
    cout << "Nilai " << bil << " = D";
  }
return 0;
}
