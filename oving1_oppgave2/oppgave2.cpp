//
//
// hist oppgave 2 til øving 1. 
//
// beregne time:minutter:sekkunder fra sekunder.
#include <iostream>
using namespace std;

int main()
{
	const float version = 1.0;  // hvorfor blir ikke .0 med cout ?? 
	const int secPerMin = 60; 
	const int secPerHour = 3600;
	int InputSecs, minutes, hours, res_minutes, res_seconds; 

	cout << "Tids Konverter V" << version << endl;
	cout << "Antall sekunder for konvertering? : "; 
	cin >> InputSecs;

	hours = InputSecs / secPerHour; 
	res_minutes = (InputSecs / secPerMin) % secPerMin;
	res_seconds = InputSecs % secPerMin; 

	cout << InputSecs << " Seconds = " << hours << ":" << res_minutes << ":" << res_seconds << endl; 

	float svar = 5.0 / 8.0;
	cout << svar << endl;
	svar = svar + 10.0 / 3.0;
	cout << svar << endl;

	return 0;
} //main