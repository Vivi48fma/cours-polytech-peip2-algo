#include <iostream>
using namespace std;
#include <chrono>
using namespace std::chrono;
#include <cstdlib>

int main(){
  int n = 10000;
  int tab[n];
  auto start = high_resolution_clock::now();
  for(int i = 0; i < n; i++){
    tab[i] = rand();
  }
  auto stop = high_resolution_clock::now();
  auto duree = duration_cast<microseconds>(stop - start);
  cout << "la fonction f a pris " << duree.count() << " ms";
}
