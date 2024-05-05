

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

float dist3(float ux, float uy, float uz, float vx, float vy, float vz) {
  float x = vx - ux;
  float y = vy - uy;
  float z = vz - uz;
  float temp = x * x + y * y + z * z;
  return sqrt(temp);
}
// separate function to print 3D points
void print3D(float x, float y, float z) {
  cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
int main() {
  float x1, y1, z1;
  float x2, y2, z2;

  cout << "Enter the first point: ";
  cin >> x1 >> y1 >> z1;
  cout << "Enter the second point: ";
  cin >> x2 >> y2 >> z2;
  cout << "The distance between the two points is: "
       << dist3(x1, y1, z1, x2, y2, z2) << endl;
  cout << "The first point is: ";
  print3D(x1, y1, z1);
  cout << "The second point is: ";
  print3D(x2, y2, z2);
  return 0;
}
