
#include "hamburger.h"


int main(){

    Meat doublePatty("Double Patty", "Beef", 2);
    Hamburger doubleBurger("Double Beef Burger" , doublePatty, false, true, true);
    doubleBurger.printSandwich();
    doubleBurger.printHamburger();
    doublePatty.printMeat();

    cout << endl << endl;

    doublePatty.setType("Chicken");
    doubleBurger.setMeatType(doublePatty);
    
    doubleBurger.printSandwich();
    doubleBurger.printHamburger();
    doublePatty.printMeat();


    return 0;
}