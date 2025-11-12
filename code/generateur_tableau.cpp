#include <iostream>
using namespace std;
#include <cstdlib>

void generateur_tableau (int n, int tab[]){
  for (int i = 0; i < n; i++){
    tab[i] = rand();
  }
 }

void afficher (int n, int tab[]){
  for (int i = 0; i < n; i++){
    cout << tab[i] << ";";
  }
 }


int main (){
  int n = 10;
  int tab[10];
  generateur_tableau(10, tab);
  afficher (10, tab);
  return 0;
}
