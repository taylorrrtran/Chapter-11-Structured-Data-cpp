#pragma once
struct MovieData
{
	std::string title, director, year, time;
};

class chapter11Problems
{
	public:
		static void movieData();
		static void showInfo(MovieData m);
		static void coporateSalesData();
		static void weatherStatistics();
		static void soccerScores();
		chapter11Problems();
};