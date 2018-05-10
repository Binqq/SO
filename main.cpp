#include<ncurses.h>
#include<iostream>
#include<stdio.h>
#include "Infield.hpp"

using namespace std;
int main()
{
    int widith, lenght;
    cout << "Podaj wymiary planszy"<<endl;
    cout << "Szerokość: ";
   cin >> widith;
    cout<<"Wysokość: ";
    cin>>lenght;


    Infield *infield = new Infield();
    int ala = infield->GetWidith();
    cout<<ala<<endl;
    delete infield;
    return 0;
}