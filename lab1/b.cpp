#include<iostream>

int main() {
  setlocale(LC_ALL, "Russian"); 

  int x,a,b,x0,y0;

  std::cout << "Введите координату х точки: " << std::endl;
  std::cin >> x0;
  std:: cout << "Введите координату y точки: " << std::endl;
  std::cin >> y0;
  std::cout << "Введите координату х прямой: " << std::endl;
  std::cin >> x;
  std::cout << "Введите коэфициент a прямой: " << std::endl;
  std::cin >> a;
  std::cout << "Введите коэфициент b прямой: " << std::endl;
  std::cin >> b;
  
  y = a*x + b;

  if(y0 == y){
    std::cout << "Точка лежит на прямой" << std::endl;
  }
  if(y0 > y){
    std::cout << "Точка лежит выше прямой" << std::endl;
   } 
  if(y0 < y){
    std::cout << "Точка лежит ниже прямой" << std::endl;
  }

  return 0;
}
