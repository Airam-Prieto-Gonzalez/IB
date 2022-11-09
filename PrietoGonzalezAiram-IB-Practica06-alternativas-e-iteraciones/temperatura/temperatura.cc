 /**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file Problema 1 C++
    * @author Airam Prieto González
    * @date Oct 25 2022
    * @brief El programa lee y determina si el número introducido es par o impar
    * @bug There are no known bugs
    * @see https://jutge.org/problems/P48107
    */

#include <iostream>

int main() {
  //std::cout<< "Por favor introduzca una temperatura en grados celsius"<<std::endl;
  int temperatura{0};
  std::cin>>temperatura;
  if (temperatura >= 30) {
    if (temperatura >= 100) {
      std::cout<<"it's hot"<<std::endl;
      std::cout<<"water would boil"<<std::endl;
    }
    else {
      std::cout<<"it's hot"<<std::endl;
    }
  }

  if (temperatura <= 10) {
    if (temperatura <= 0) {
      std::cout<<"it's cold"<<std::endl;
      std::cout<<"water would freeze"<<std::endl;
    }
    else {
      std::cout<<"it's cold"<<std::endl;
    }
  }

  else {
    std::cout<<"it's okay"<<std::endl;
  }
}  

    
