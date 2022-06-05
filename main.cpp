#include <iostream>
#include "Jungle.h"
#include "Animal.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"
#include "Pet.h"

using namespace std;

int main() {
    int n;
    cin>>n;

    Jungle a(n);
    if (n%2==0){
        for (int i=0;i<n/2;i++){
            a.AddAnimal(new DomesticAnimal);
            a.AddAnimal(new WildAnimal);
        }
    }
    else {
        for (int i=0;i<(n/2);i++){
            a.AddAnimal(new DomesticAnimal);
            a.AddAnimal(new WildAnimal);
        }
        a.AddAnimal(new WildAnimal);

    }
    for(int i=0;i<1000;i++)
        a.movement();

    cout<<a.getTotalFall();

    int b;
    cin>>b;
    Jungle x(b);

    for (int i=0;i<b/3;i++){
        x.AddAnimal(new DomesticAnimal);
        x.AddAnimal(new WildAnimal);
        x.AddAnimal(new Pet);
    }
    for (int i=0;i<b%3;i++){
        x.AddAnimal(new Pet);
    }
    for(int i=0;i<1000;i++)
        x.movement();

    cout<<x.getTotalFall();

    return 0;
}
