
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N; // the number of students;
	int M; // the number of scores;

	cout << "Enter the number of students: " ;
	cin >> N;
	cout << "Enter the number of scores for each student: " ;
	cin >> M;

	// TODO: declare variables for student name, score, sum, average
	string sname;
	double score, sum, average;

	for(int i=0; i<N; i++)
	{
		// TODO: read student name and initialize sum
		cout << "Student Name: " << endl;
		cin >> sname;
		for (int j=0; j<M; j++)
		{
			cout << "Enter score: " << endl;
			cin >> score;
			sum += score;
			// TODO: read each score and accumulate sum
		}
		average = sum / M;
		cout << sname << "\t" << sum << "\t" << average << endl;
		// TODO: calculate average and print name, sum, average
		sum = 0;
	}

	return 0;
}
