/*
  mealCalc.cpp
  Program prompts user to enter a meal price, calculate tax and a subtotal, and then ask for a tip percentage and calculate the tip and total.
*/

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	// Variables
	const float TAX_RATE = 1.63;
	float mealCost; // save user's price input
	float subtotal; // price of meal without tips
	float tipPercentage; // save user's percentage input
	float tip; // calculated tip based on percentage and price of order
	float total; // price including tax and tips

	// Intro
	std::cout << "\nWelcome to the meal calculator..." << std::endl;

	// Prompt user to enter meal price
	std::cout << "\nPlease enter the price of meal: ";
	std::cin >> mealCost;
	
	// Set precision
	std::cout << std::fixed << std::setprecision(2);
	// Calculate tax
	std::cout << "Tax: " << TAX_RATE << std::endl;
	subtotal = mealCost + TAX_RATE;
	std::cout << "Subtotal: " << subtotal << std::endl;

	// Calculate tips
	std::cout << "Enter %tip: ";
	std::cin >> tipPercentage;
	tip = subtotal * (tipPercentage / 100);
	std::cout << "Tip: " << tip << std::endl;


	// Calculate total
	total = subtotal + tip;
	std::cout << "Total: " << total;

	return 0;
}
