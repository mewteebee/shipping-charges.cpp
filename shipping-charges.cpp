// my solution for the shipping charges assignment 
#include <iostream>

double shippingChargeCalculator(double weight, double distance) {
    double distancePer500miles = distance/500;
    double priceOfShipping;
    
    if (weight > 10 && weight < 20){
        priceOfShipping = 4.80;
    } else if (weight < 10 && weight > 6) {
        priceOfShipping = 3.70; 
    } else if (weight < 6 && weight > 2) {
        priceOfShipping = 2.20;
    } else if (weight < 2 && weight > 0) {
        priceOfShipping = 1.10;
    }
    
    return distancePer500miles * priceOfShipping;
}

void printWeightDistanceAndShippingCharges(double weight, double distance){
    double totalCostOfShipping = shippingChargeCalculator(weight, distance); 
    std::cout << "" << std::endl;
    std::cout << "Weight of Package: " << weight << "kg" << std::endl;
    std::cout << "Distance of Shipping: " << distance << "mi" << std::endl;
    std::cout << "Total Cost of Shipping: $" << totalCostOfShipping << std::endl;
    std::cout << "" << std::endl;

}

int main() {
    double weight, distance; // values the function will take
    
    weight = 13.00; 
    distance = 15000.00; 
    
    // function to print final results of the calculation
    printWeightDistanceAndShippingCharges(weight, distance);

    return 0;
}
