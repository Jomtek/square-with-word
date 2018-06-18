#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string long_to_string(long input){
	stringstream ss;
	ss << input;
	return ss.str();
}
string char_to_string(char input){
	stringstream ss;
	ss << input;
	return ss.str();
}
string square(string word){
	long word_size = word.size();
	
	string toPut;
	string size_in_string = long_to_string(word_size);
	string result;
	
	if(word_size > 9){
		string getFirstChar = char_to_string(long_to_string(word.size()).at(0));
		size_in_string = getFirstChar;		
	}
	
	for(int i2 = 1; i2 <= word_size ; i2++){
		toPut += size_in_string;
	}
		
	
	cout << "The character's length is " << word_size << " characters.\n" << endl;
	
	for(int i = 1; i <= word_size; i++){
		result += "\t\t" + toPut + "\n";
	}
	
	return result;
}

int main(int argc, char** argv) {

	string word;

	cout << "Welcome to the square-program !" << endl;	
	cout << "\n-------------------------------\n\nWhat word do you want to make a square of ?\n\n-------------------------------" << endl;
	
	getline(cin, word);

	cout << "-------------------------------\n\nYou have choosen the word '" << word << "'."<< endl;
	
	cout << square(word) << endl;
	return 0;
}