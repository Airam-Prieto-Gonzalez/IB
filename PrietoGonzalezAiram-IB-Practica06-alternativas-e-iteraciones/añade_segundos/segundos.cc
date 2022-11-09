 /**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @author Airam Prieto González
    * @date Nov 8 2022
    * @brief El programa lee una hora introducida y le suma un segundo
    * @bug There are no known bugs
    * @see https://jutge.org/problems/P48107
    */


#include <iostream>

int main() {
  std::cout<< "El programa le suma un segundo a la hora que usted introduzca"<<std::endl;
  std::cout<< "Por favor, escriba su hora en formato 24 horas"<<std::endl;
  int hora{0};
  std::cout<< "introduzca la hora" <<std::endl;
  std::cin>>hora;
  while (hora > 23 || hora < 0) {
    std::cout<<"Por favor introduzca una hora válida"<<std::endl;
    std::cin>>hora;
  }
  int minuto{0};
  std::cout<< "introduzca los minutos" <<std::endl;
  std::cin>>minuto;
  while (minuto > 60 || minuto < 0) {
    std::cout<<"Por favor introduzca una cifra válida"<<std::endl;
    std::cin>>minuto;
  }
  int segundo{0};
  std::cout<< "introduzca los segundos" <<std::endl;
  std::cin>>segundo;
  while (segundo > 60 || segundo < 0) {
    std::cout<<"Por favor introduzca una cifra válida"<<std::endl;
    std::cin>>hora;
  }
  if (++segundo > 59) {
    int hora1{hora};
    int minuto1{++minuto};
    if (minuto1 > 59) {
      int hora2{++hora1};
      std::cout<<hora2<<":00:00"<<std::endl;
    }
    else {
      std::cout<<hora1<<":"<<minuto1<<":00"<<std::endl;
    }
  }
  else {
    std::cout<<hora<<":"<<minuto<<":"<<++segundo<<std::endl;
  }
}


