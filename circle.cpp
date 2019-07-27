#include <iostream>
#include <string>
using namespace std;

int main(){
  const double pi = 3.14159;
  const double r = 5;
  cout << "The circumference of a circle with a radius of " << r << " is " << 2*pi*r << ". " << endl;
  cout << "The area of a circle with a radius of " << r << " is " << pi*(r*r) << ". " << endl;

  return 0;
}
