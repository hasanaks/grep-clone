#include <vector>
#include <iostream>
#include <string>

std::string copy("abcdefg");
std::string search("");
int arrLength;
int setLength;
char* arr;
char* set;
std::vector<char*> results;

void arrayyer(std::string& input, std::string& ser) {
	arrLength = input.length();
	setLength = ser.length();
	arr = &input[0];
	set = &ser[0];
}

void searchAlgorithm() {
 	int count=0;
	for (int i = 0; i < arrLength; i++) {
		char* found;
		if (arr[i]==set[count]&&count<setLength)
		{
			
			
			if (count == setLength - 1) {
				found = &arr[i-count];
				results.push_back(found);
				found = NULL;
				count = 0;
			}
			count++;

		}
		else
		{
			count = 0;
			found = NULL;
		}
	}
}

void vectorOut() {
	std::cout << "found: ";
	for (char* i : results) {
		
		for (int j = 0; j < setLength; j++) { if (j == 0) { std::cout << "found in " << &i<<" "; }std::cout << i[j]; }
		std::cout<<"\n";
	}std::cout <<"size: "<< results.size();
}


int main() {
	std::cout << "enter: \n";
	std::cin >> search;
	arrayyer(copy,search);
	searchAlgorithm();
	vectorOut();
	return 0;
}