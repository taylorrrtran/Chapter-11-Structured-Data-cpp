#include <iostream>
#include <string>
#include "Chapter11Problems.h"

int main() {
	chapter11Problems *p1 = new chapter11Problems;
	p1->soccerScores();
	system("pause");
	return 0;
}

void chapter11Problems::movieData() {
	
	//Structured Data
	struct MovieData
	{
	std::string title, director, year, time;
	};

	MovieData movie1, movie2;

	//Gather data for Movie 1
	std::cout << "Enter the title for Movie 1: ";
	std::getline(std::cin, movie1.title);

	std::cout << "Enter the director of Movie 1: ";
	std::getline(std::cin, movie1.director);

	std::cout << "Enter the year of Movie 1: ";
	std::getline(std::cin, movie1.year);

	std::cout << "Enter the running time of Movie 1: ";
	std::getline(std::cin, movie1.time);

	//Gather data for Movie 2
	std::cout << std::endl;
	std::cout << "Enter the title for Movie 2: ";
	std::getline(std::cin, movie2.title);

	std::cout << "Enter the director of Movie 2: ";
	std::getline(std::cin, movie2.director);

	std::cout << "Enter the year of Movie 2: ";
	std::getline(std::cin, movie2.year);

	std::cout << "Enter the running time of Movie 2: ";
	std::getline(std::cin, movie2.time);

	//Display Info
	std::cout << "Movie 1\n\n";
	std::cout << "Title: " << movie1.title << std::endl;
	std::cout << "Director: " << movie1.director << std::endl;
	std::cout << "Year: " << movie1.year << std::endl;
	std::cout << "Running Time: " << movie1.time << std::endl;

	std::cout << std::endl << "Movie 2\n\n";
	std::cout << "Title: " << movie2.title << std::endl;
	std::cout << "Director: " << movie2.director << std::endl;
	std::cout << "Year: " << movie2.year << std::endl;
	std::cout << "Running Time: " << movie2.time << std::endl;
}

void chapter11Problems::showInfo(MovieData m)
{
	std::cout << "Title: " << m.title << std::endl;
	std::cout << "Director: " << m.director << std::endl;
	std::cout << "Year: " << m.year << std::endl;
	std::cout << "Running Time: " << m.time << std::endl;
};

void chapter11Problems::coporateSalesData()
{
	//Structured Data
	struct Sales
	{
		std::string division;
		double firstSales, secondSales, thirdSales, fourthSales;
		double annualSales, averageQuarter;
	};

	Sales divisionName[4];

	//Gather data for each division: east = 1, west = 2, north = 3, south = 4
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Enter the division name: ";
		std::getline(std::cin, divisionName[i].division);

		//First-Quarter
		std::cout << "Enter first-quarter sales: ";
		std::cin >> divisionName[i].firstSales;

		//Do not accept any negative number
		while (divisionName[i].firstSales < 0)
		{
			std::cout << "Sales value cannot be negative. Try again: ";
			std::cin >> divisionName[i].firstSales;
		}

		//Second Quarter
		std::cout << "Enter second-quarter sales: ";
		std::cin >> divisionName[i].secondSales;

		//Do not accept any negative number
		while (divisionName[i].secondSales < 0)
		{
			std::cout << "Sales value cannot be negative. Try again: ";
			std::cin >> divisionName[i].secondSales;
		}

		//Third Quarter
		std::cout << "Enter third-quarter sales: ";
		std::cin >> divisionName[i].thirdSales;

		//Do not accept any negative number
		while (divisionName[i].thirdSales < 0)
		{
			std::cout << "Sales value cannot be negative. Try again: ";
			std::cin >> divisionName[i].thirdSales;
		}

		//Fourth Quarter
		std::cout << "Enter fourth-quarter sales: ";
		std::cin >> divisionName[i].fourthSales;

		//Do not accept any negative number
		while (divisionName[i].fourthSales < 0)
		{
			std::cout << "Sales value cannot be negative. Try again: ";
			std::cin >> divisionName[i].fourthSales;
		}

		divisionName[i].annualSales = divisionName[i].firstSales + divisionName[i].secondSales + divisionName[i].thirdSales + divisionName[i].fourthSales;
		divisionName[i].averageQuarter = divisionName[i].annualSales / 4.0;
	}

	//Display all data
	for (int i = 0; i < 4; i++)
	{
		std::cout << "\n\nDivision Name:    " << divisionName[i].division << std::endl;
		std::cout << "First-Quarter Sales:  " << divisionName[i].firstSales << std::endl;
		std::cout << "Second-Quarter Sales: " << divisionName[i].secondSales << std::endl;
		std::cout << "Third-Quarter Sales:  " << divisionName[i].thirdSales << std::endl;
		std::cout << "Fourth-Quarter Sales: " << divisionName[i].fourthSales << std::endl;
		std::cout << "Total Annual Sales:   " << divisionName[i].annualSales << std::endl;
		std::cout << "Average Quarter Sales:  " << divisionName[i].averageQuarter << std::endl;
	}
}

void chapter11Problems::weatherStatistics()
{
	struct Weather 
	{
		std::string month;
		double rainfall, hiTemp, loTemp, avgTemp;
	};

	Weather year[12];

	//Running total for rainfall and average temperature of each month
	double totalRainfall = 0;
	double totalAvgTemp = 0;

	//Gather data for each month of the year
	for (int i = 1; i <= 12; i++)
	{
		//Get name of the month
		std::cout << "Enter name of the month: ";
		std::getline(std::cin, year[i].month);
		
		//Get total rainfall for that same month
		std::cout << "Enter the total rainfall for this month: ";
		std::cin >> year[i].rainfall;

		//Get high temperature for that same month
		std::cout << "Enter the high temperature for this month in Fahrenheit: ";
		std::cin >> year[i].hiTemp;

		//Get low temperature for that same month
		std::cout << "Enter the low temperature for this month in Fahrenheit: ";
		std::cin >> year[i].loTemp;

		//Calculate average temperature for that same month
		year[i].avgTemp = (year[i].hiTemp + year[i].loTemp) / 2.0;
		totalAvgTemp += year[i].avgTemp;

		//Calculae running total of yearly rainfall
		totalRainfall += year[i].rainfall;
	}

	//Find highest and lowest temperatures of the year and the month it occured in
	double lowestTemp = year[0].rainfall;
	double highestTemp = year[0].rainfall;
	std::string loMonth, hiMonth;

	for (int i = 0; i <= 11; i++)
	{
		if (lowestTemp > year[i].rainfall)
		{
			lowestTemp = year[i].rainfall;
			loMonth = year[i].month;
		}
		else if (highestTemp < year[i].rainfall)
		{
			highestTemp = year[i].rainfall;
			hiMonth = year[i].month;
		}
			
	}

	//Get average monthly rainfall and average temperature
	double averageMonthRainfall = totalRainfall / 12.0;
	double averageMonthTemp = totalAvgTemp / 12.0;

	//Display data
	std::cout << "\nTotal rainfall for the year: " << totalRainfall << std::endl;
	std::cout << "Average monthly rainfall   : " << averageMonthRainfall << std::endl;
	std::cout << "Average monthly temperature: " << averageMonthTemp << std::endl;
	std::cout << "Highest Temperature: " << highestTemp;
	std::cout << "		Month: " << hiMonth << std::endl;
	std::cout << "Lowest Temperature: " << lowestTemp;
	std::cout << "		Month: " << loMonth << std::endl;
}

void chapter11Problems::soccerScores()
{
	struct soccerPlayer
	{
		std::string name;
		int number, points;
	};

	soccerPlayer team[12];

	//Running total for amount of points scored by team
	int totalPoints = 0;

	//Gather player info: name, number, points
	for (int i = 0; i < 12; i++)
	{
		std::cout << "\nPlayer Name: ";
		std::getline(std::cin, team[i].name);

		std::cout << "Player Number: ";
		std::cin >> team[i].number;

		//Number cannot be negative
		while (team[i].number < 0)
		{
			std::cout << "Value cannot be less than 0. Try again: ";
			std::cin >> team[i].number;

			//Clear input buffer
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}

		//Clear input buffer
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		std::cout << "Points scored by player: ";
		std::cin >> team[i].points;

		//Clear input buffer
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		//Points cannot be negative
		while (team[i].points < 0)
		{
			std::cout << "Value cannot be less than 0. Try again: ";
			std::cin >> team[i].points;

			//Clear input buffer
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}

		//Calculate running total
		totalPoints += team[i].points;
	}

	//Find player who scored the highest amount of points
	int highest = team[0].points;
	int playerNumHigh = team[0].number;
	std::string playerName = team[0].name;

	for (int i = 1; i <= 11; i++)
	{
		if (highest >= team[i].points)
			continue;
		else
		{
			highest = team[i].points;
			playerNumHigh = team[i].number;
			playerName = team[i].name;
		}
	}

	//Display data
	std::cout << "\nTotal points earned by team: " << totalPoints << std::endl;
	std::cout << "Player with highest score: " << playerName << std::endl;
	std::cout << "Player Number: " << playerNumHigh << std::endl;
	std::cout << "Points scored: " << highest << std::endl;
}

chapter11Problems::chapter11Problems()
{
};