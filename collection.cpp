#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

template <class T>
class Collection
{
private:
	vector<T> theBag;  //Will be the actual collection
public:
	Collection(vector<T>);  //Constructor
	void setCollection(vector<T>);  //Sets the collection
	void displayCollection();  //Displays all the values
	string CollectionOrder();  //Will output what order the collection goes
};
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: Collection() (Constructor)
// Input: Vector<t>
// Output: Sets theBag to a vector containing T
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
template <class T>
Collection<T>::Collection(vector<T> s) {  //Sets the myBag value
	theBag = s;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: setCollection()
// Input: Vector<t>
// Output: Sets theBag to a vector containing T
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
template <class T>
void Collection<T>::setCollection(vector<T> b)  //Sets the myBag value
{
	theBag = b;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: displayCollection()
// Input: None
// Output: Shows all items contained in theBag
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
template <class T>
void Collection<T>::displayCollection()
{
	for (T iter : theBag)
	{
		cout << iter << ", ";
	}
	cout << endl;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: CollectionOrder()
// Input: None
// Output: String stating whether vector ascends, descends, or neither
// Notes: Would have been better to use the iterating For loop to keep
// track of index, problem arose with repeating values
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
template <class T>
string Collection<T>::CollectionOrder()
{
	T temp = theBag.at(0);  //Will be the comparing value
	unsigned int repeatCheck = 1;  //Makes sure the vector is done (Basically an Iterator)
	for (T ascend : theBag)  //First loop for ascending
	{
		if (ascend >= temp) //If greater or equal
		{
			temp = ascend;  //assigns temp to current value
			if ((temp == theBag.back()) && (repeatCheck == theBag.size())) { //If temp == last value and iterator is at last value
				return("Ascending");
			}//ifComplete

		}//ifCheck
		else
		{
			break;
		}
		repeatCheck++;  //Iterate
	}// for

/**************Descending*******************************/
	repeatCheck = 1;  //reset iterator
	temp = theBag.at(0);  //Will be the comparing value
	for (T descend : theBag)  //Second Loop for Descending
	{
		if (descend <= temp)  //If next value is less then current
		{
			temp = descend;
			if ((temp == theBag.back()) && (repeatCheck == theBag.size())) { // Descending order
				return("Descending");
			}//ifComplete

		}//ifCheck
		else  //No longer descending
		{
			break;
		}
		repeatCheck++;  //Iterate
	}// for
	return ("No");  //If it reaches here it's neither
}