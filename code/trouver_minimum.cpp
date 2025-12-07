#include <iostream>
using namespace std;

// Renvoie le minimum d'un tableau de taille n
int minimum(int* tab,int n){
    int mini = tab[0];
    for(int i=1;i<n;i++){
        if(tab[i]<mini){
            mini = tab[i];
        }
    }
    return mini;
}

int main(){
    int tableau_test[5] = {4,2,0,9,-1};
    cout << "Le minimum du tableau est : " << minimum(tableau_test,5) << endl;
    return 0;
}