#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
	// List of restaurants
	vector<string> restaurants = {
		"Wingstop", "Burger King", "McDonald's", "Dunkin Donuts", "Popeye's", "KFC", "Antojitos Colombiano", "Don Quijote", "Bamboo Garden", 
		"Tropical Smoothie", "Dairy Queen", "Pizza Hut", "La Carreta", "Wendy's", "Red Robin", "Taco Bell", "Jersey Mikes", "Charlie's Cheesesteaks",
		"Dave's Hot Chicken", "IHop", "Subway", "Chipotle", "Five Guys",
	};

	// Counts number of restaurants
	int count = restaurants.size();

	// Seeds random number generator
	srand(static_cast<unsigned int>(time(nullptr)));

	// Picks a restaurant
	int index = rand() % restaurants.size();

	//Displays restaurant
	cout << "Tonight you're ordering from: " << restaurants[index] << endl;

	return 0;

}