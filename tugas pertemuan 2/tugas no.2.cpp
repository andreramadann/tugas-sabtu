#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Luas Permukaan dan Volume Bola  ##" << endl;
  cout << "==================================================" << endl;
  cout << endl;
 
  float jari2, luas_permukaan, volume;
 
  cout << "Input jari-jari bola: ";
  cin >> jari2;
  cout << endl;
 
  luas_permukaan = (4.0/3.0) * (22.0/7.0) * jari2 * jari2 * jari2;
  volume = 4 * (22.0/7.0) * jari2 * jari2;
 
  cout << "Luas permukaan bola = " << luas_permukaan << endl;
  cout << "Volume bola = " << volume << endl;
 
  return 0;
}
