// Program: Demonstration of Inline Function in C++
// Real-life example: Calculating the total price of products

#include <iostream>      // Provides input and output functions.

using namespace std;     // Allows us to use cout directly.

// This is an inline function.
// The compiler may replace the function call with the function code.
// Inline functions are useful for small and simple functions.
inline double calculateTotal(double price, int quantity)
{
    // Calculate the total price.
    return price * quantity;
}

int main()
{
    // Store the price of one product.
    double price = 250.50;

    // Store the number of products purchased.
    int quantity = 3;

    // Call the inline function to calculate the total.
    double total = calculateTotal(price, quantity);

    // Display the product information.
    cout << "=== Product Bill ===" << endl;
    cout << "Price per Product: Rs. " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price: Rs. " << total << endl;

    // return 0 means successful program execution.
    return 0;
}