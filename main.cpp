#include "Customer.h"
#include "Movie.h"

#include <iostream>
using namespace std;

int main()
{
    Genre regular("REGULAR", 1, 2, 2, 1, 5, 2);
    Genre new_release("NEW_RELEASE", 2, 5, 2, 2, 1, 2);
    Genre children("CHILDREN", 1, 2, 2, 1, 2, 2);
    Movie regular_1("일반 1", regular);
    Movie new_release_1("신작 1", new_release);
    Movie children_1("어린이용 1", children);
    Customer customer_1("김찬우", 10);
    Receipt receipt_1("./Receipt/001.txt");

    customer_1.addRental(Rental(regular_1, 3));
    customer_1.addRental(Rental(new_release_1, 4));
    customer_1.addRental(Rental(children_1, 4));
    cout << customer_1.getReceipt(receipt_1) << endl;

    customer_1.~Customer();

    return 0;
}
