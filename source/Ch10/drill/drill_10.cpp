#include "../../std_lib_facilities.h"

struct Point{
	double x;
	double y;
};

bool operator==(const Point& first, const Point& second)
{
	return (first.x==first.x && second.y==second.y);
}

bool equalsize(vector<Point>& ox, vector<Point>& px){
	if (ox.size() == px.size()) return true;
	else return false;
}
bool equalelements(vector<Point>& ox, vector<Point>& px)
{
	 if (ox == px) return true;
	 else return false;
	 
}
int main()
try{

	cout << "Input seven (x,y) pairs: \n";

	vector<Point> original_points;
	vector<Point> processed_points;

	double x = 0;
	double y = 0;

	for (int i = 0; i < 7; ++i)
	{	
		cout << i+1 << ". x: ";
		cin >> x;
		cout << i+1 << ". y: ";
		cin >> y;
		original_points.push_back(Point{x,y});
	}


//output start
	ofstream ost {"myname.txt"};

	if (!ost) error ("can't open output file!", "myname.txt");

	for (const auto& w : original_points)
	{
		ost << w.x << ' ' << w.y << endl;
	}
	ost.close();
//output finish, input start


	ifstream ist {"myname.txt"};

	if (!ist) error ("can't open input file", "myname.txt");

	while(ist >> x >> y){
		processed_points.push_back(Point{x,y});
	}
	processed_points.push_back(Point{3,5.3});
	ist.close();

//input finish;
//kiiratás rész start
	cout << "\nOriginal points: \n" << endl;

	for (const auto& l : original_points)
	{
		cout << l.x << ' ' << l.y << endl;
	}

	cout << "\nProcessed points: \n" << endl;

	for (const auto& l : processed_points)
	{
		cout << l.x << ' ' << l.y << endl;
	}
// kiiratás end

// check if vectors equal size/equal elements
	bool size = equalsize(original_points, processed_points);
	bool elements = equalelements(original_points,processed_points);

	if (size == false or elements == false)
		cout << "Something's wrong!" << endl;
	else
		cout << "They're the same!" << endl;
// equal end
	

//	cout << original_points.size() << "|" << processed_points.size();
//	cout << "Size value: " << equalsize(original_points, processed_points);

	return 0;
} catch (runtime_error& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some kind of error..\n " << endl;
	return 2;
}