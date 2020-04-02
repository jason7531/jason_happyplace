#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vector_1;
    vector<int> vector_2;
    
    vector_1.push_back(10);
    vector_1.push_back(20);
    cout << "Vector 1 has " << vector_1.at(0) << " " << vector_1.at(1) << " and contains " << vector_1.size() << " elements\n";
    vector_2.push_back(100);
    vector_2.push_back(200);
     cout << "Vector 2 has " << vector_2.at(0) << " " << vector_2.at(1) << " and contains " << vector_2.size() << " elements\n";
     
     vector<vector<int>> vector_2d;
    
   
     vector_2d.push_back(vector_1);
     vector_2d.push_back(vector_2);
     
     
     
     cout << "2d vector has " << vector_2d.at(0).at(0) << " "<<vector_2d.at(0).at(1) << endl;
     cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
     
     vector_1.at(0)=1000;
     cout << "2d vector has " << vector_2d.at(0).at(0) << " "<<vector_2d.at(0).at(1) << endl;
     cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
       cout << "Vector 1 has " << vector_1.at(0) << " " << vector_1.at(1) << " and contains " << vector_1.size() << " elements\n";
     
     
     
    
    
	return 0;
}
