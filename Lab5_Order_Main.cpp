/**************************************************************/
/*** Title: Lab5_Order_Main.cpp           				    ***/
/*** Developer: Santiago Sanchez						    ***/
/*** Date: 10/3/2022									    ***/
/*** Description: Given a vector, will decide if it ascends ***/
/*** or descends                                            ***/
/**************************************************************/
#include "collection.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
   
    //**************************************************************//
    // **** Collection of Integers                              ****//
    // *************************************************************//
 
    //
    // create a vector of integers and
    // fill it with (5) assending numbers
    //
    vector<int> my_integers;
    my_integers.push_back(5);
    my_integers.push_back(15);
    my_integers.push_back(25);
    my_integers.push_back(35);
    my_integers.push_back(45);

    //
    // create an object of Collection<int> called 
    // Collection_of_Integers with the vector of integers
    //
    Collection<int> Collection_of_Integers(my_integers);

    //
    // Print the Collection_of_Integers with displayCollection()
    //
    Collection_of_Integers.displayCollection();

    //
    // Display the order of the Collection_of_Integers
    //
    cout << Collection_of_Integers.CollectionOrder() << " Order\n" << endl;

    //
    // Modify my_integers vector so it's no longer
    // in assending order
    //
    my_integers.push_back(35);

    //
    // Set the Collection_of_Integers object
    // to the new data 
    //
    Collection_of_Integers.setCollection(my_integers);

    //
    // Print the Collection_of_Integers with displayCollection()
    //
    Collection_of_Integers.displayCollection();

    //
    // Display the order of the Collection_of_Integers
    //
    cout << Collection_of_Integers.CollectionOrder() << " Order\n" << endl;
  
 
    //
    // erase the vector of integers and
    // fill it with (4) dessending numbers
    //
    my_integers.erase(my_integers.begin(), my_integers.end());
    my_integers.push_back(40);
    my_integers.push_back(30);
    my_integers.push_back(20);
    my_integers.push_back(10);

    //
    // Set the Collection_of_Integers object
    // to the new data 
    //
    Collection_of_Integers.setCollection(my_integers);
    
    
    //
    // Print the Collection_of_Integers with displayCollection()
    //
    Collection_of_Integers.displayCollection();

    //
    // Display the order of the Collection_of_Integers
    //
    cout << Collection_of_Integers.CollectionOrder() << " Order\n" << endl;

    //
    // Modify my_integers vector so it's no longer
    // in assending order
    //
    my_integers.push_back(30);

    //
    // Set the Collection_of_Integers object
    // to the new data 
    //
    Collection_of_Integers.setCollection(my_integers);

    //
    // Print the Collection_of_Integers with displayCollection()
    //
    Collection_of_Integers.displayCollection();

    //
    // Display the order of the Collection_of_Integers
    //
    cout << Collection_of_Integers.CollectionOrder() << " Order\n" << endl;

    //**************************************************************//
    // **** Collection of Strings                               ****//
    // *************************************************************//
    //
    // Repeat the process outlined above for a collection of user 
    // created strings.  Create a vector of 4-5 strings, create a 
    // Collection_of_Stings object with this vector, and then
    // demonstarte theat the Collection class works for strings

    //Ascending
    vector<string> my_strings;
    my_strings.push_back("F");
    my_strings.push_back("Fig");
    my_strings.push_back("Fignewton");
    my_strings.push_back("Fignewtons");
    my_strings.push_back("Fignewtons with a side of Maple Syrup");

    //Sets the collection of strings
    Collection<string> Collection_of_Strings(my_strings);

    //Displays the collection of strings
    Collection_of_Strings.displayCollection();

    //Displays order of collection
    cout << Collection_of_Strings.CollectionOrder() << " Order\n" << endl;

    //Descending
    my_strings.clear();
    my_strings.push_back("Fignewtons with a side of Maple Syrup");
    my_strings.push_back("Fignewtons");
    my_strings.push_back("Fignewton");
    my_strings.push_back("Fig");
    my_strings.push_back("F");

    //Sets the collection of strings
    Collection_of_Strings.setCollection(my_strings);

    //Displays the collection of strings
    Collection_of_Strings.displayCollection();

    //Displays order of collection
    cout << Collection_of_Strings.CollectionOrder() << " Order\n" << endl;

    //**************************************************************//
    // **** Collection of Characters                            ****//
    // *************************************************************//
    //
    // Repeat the process outlined above for a collection of user 
    // created characters.  Create a vector of 4-5 characters, create
    // a Collection_of_Characters object with this vector, and then
    // demonstarte that the Collection class works for characters
    //

    //Ascending
    vector<char> my_chars;
    my_chars.push_back('a');
    my_chars.push_back('b');
    my_chars.push_back('c');
    my_chars.push_back('d');
    my_chars.push_back('e');

    //Sets the collection of characters
    Collection<char> Collection_of_Chars(my_chars);

    //Displays the collection of characters
    Collection_of_Chars.displayCollection();

    //Displays order of collection
    cout << Collection_of_Chars.CollectionOrder() << " Order\n" << endl;

    //Descending
    my_chars.clear();
    my_chars.push_back('e');
    my_chars.push_back('d');
    my_chars.push_back('c');
    my_chars.push_back('b');
    my_chars.push_back('a');
    //Sets the collection of characters
    Collection_of_Chars.setCollection(my_chars);
    //Displays the collection of characters
    Collection_of_Chars.displayCollection();

    //Displays order of collection
    cout << Collection_of_Chars.CollectionOrder() << " Order\n" << endl;
    return 0;
}
/*********************************************************/