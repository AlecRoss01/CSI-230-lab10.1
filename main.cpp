#include "util.h"

int main() {
  //random element accesss
  vector<string> myVector = {"hello", "there", "my", "friend", "Csi230"};
  cout << "Random Element of myVector: " << randomElement(myVector) << endl;
  
  //double manipulation
  vector<double> doubleVector = {49.4, 73.5, 82.6, 134.9, 77.7};
  cout << "sum of the doubles: " << sum(doubleVector) << endl;
  cout << "average of the doubles: " << avg(doubleVector) << endl;
  cout << "lowest of the doubles: " << lowest(doubleVector) << endl;
  string multiWordString = "A little bird with a yellow bill";
  
  //string manipulation
  cout << "Before manipulating string: " << multiWordString << endl;
  camelCase(multiWordString);
  cout << "After manipulating string: " << multiWordString << endl;
}
