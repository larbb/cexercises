#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;

int main() 
{
	vector<string> text;
	// text must be sorted
	// beg and mid will denote the range we're sorting
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg)/2; //original midpoint
	string sought = "e";
	// while there are still elements to look at and we haven't yet found 
	while (mid != end && *mid != sought) {  //is the element we want in the second half?
		if(sought < *mid)
			end = mid;  //if so, adjuest the range to ignore the second half
		else //the elemtn we want is in the else
			beg = mid + 1; //start by looking with the element just after mid
		mid = beg + (end - beg); //new midpoint
	}	
}
