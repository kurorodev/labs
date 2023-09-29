#include<iostream>
#include<cmath>

#define DEG 90/asin(1.0)

double getAngle(double a, double b, double c);

int main() {
  setlocale(LC_ALL, "Russian");

  double a, b, c;
  double angle;
  
  std::cout << "Введите длину стороны A" << std::endl;
  std::cin >> a;
  std::cout << "Введите длину стороны B" << std::endl;
  std::cin >> b;
  std::cout << "Введите длину стороны C" << std::endl;
  std::cin >> c;

  if (a + b < c || b + c < a || c + a < b) {
    std::cout << "Вы ввели не корректные данные" << std::endl;
  }
  else {
    double angleA_B = getAngle(a, b, c) * DEG;
    double angleB_C = getAngle(b, c, a) * DEG;
    double angleC_A = getAngle(c, a, b) * DEG;

    std::cout << "Угол между A и B = " << angleA_B << std::endl;
    std::cout << "Угол между B и C = " << angleB_C << std::endl;
    std::cout << "Угол между C и A = " << angleC_A << std::endl;
  }
  
  return 0;
}

double getAngle(double a, double b, double c) {
  return acos((a*a + b*b - c*c) / (2*a*b));
}
