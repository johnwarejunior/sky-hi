#include <iostream>

int main() {

  int FirstAltitude;
  int SecondAltitude;
  
  std::cout << "Enter the first altitude: ";
  std::cin >> FirstAltitude;
  std::cout << "Enter the second altitude: ";
  std::cin >> SecondAltitude;

  int AltitudeChange = FirstAltitude - SecondAltitude;
  std::cout << AltitudeChange;
}
