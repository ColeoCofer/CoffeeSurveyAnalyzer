#ifndef COFFEESURVEYANALYZER_H
#define COFFEESURVEYANALYZER_H

struct SurveyResult {
	int minAge;
	int maxAge;
	char* favoriteDrink;
	char** brewMethods;
};

class CoffeeSurveyAnalyzer {
	private:
	 char filename;
	 int rowCount;
	public:
		CoffeeSurveyAnalyzer();
		void loadFile();
		void add();
		void remove();
		void print();
		void save();
		void exportToCsv();
};

#endif 