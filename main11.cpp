#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
void print_numbers(const vector <int> &vec);
void add_numbers(vector <int> &vec);
int smallest_number(vector <int> &vec);
int largest_number(vector <int> &vec);
double mean_number(vector <int> &vec);
int main()
{
	vector <int> vec{1,2,3};
    char choice {'a'};
    do {
    cout << "Welcome to Jason's Menu\n" ;
    cout << "The default number collection is {1,2,3}, the further operations can be done with the help of the given menu";
    cout << "Choose any of the following options:\n" ;
    cout << " P: Print numbers\n A:Add numbers to the collection \n M:Find mean of the numbers\n S:Find the smallest \n L:Find the largest\n Q:Quit\n" ;
    
    cin >> choice;
    if (choice=='p'||choice=='P') 
        print_numbers(vec);
    
            
        else if(choice=='a'||choice=='A') {
             add_numbers(vec);
            
        }
            else if(choice=='m'||choice=='M')
            {
               
                 cout << "The mean of the numbers is " <<  mean_number(vec) << endl;
                 }
                     
                else if(choice=='s'||choice=='S') {
                   
                     cout << "The smallest numbers is " <<  smallest_number(vec) << endl;
                }
                             
                    else if(choice=='l'||choice=='L') {
                     
                     cout << "The largest number is " << largest_number(vec) << endl;
                    }
                        else if(choice=='q'||choice=='Q')
                            cout << "Thanks for using Jason Menu";
                            else {
                                cout << "Invalid Choice PLease try again" << endl;
                            }
    }
    while (choice!='q' && choice!='Q');
    
	return 0;
}
void print_numbers(const vector <int> &vec) {
        if(vec.size()==0)
            cout << "The list is empty";
            else 
                 cout<<"THe numbers are [ " ;
        for(auto val:vec)
           cout << val << " ";
           cout << "]" << endl;
}
void add_numbers( vector <int> &vec) {
    int num{};
            
           
    cout << "Enter the numbers to be added to the collection" << endl;
             cin >> num;
             
            vec.push_back(num);
}
int smallest_number(vector <int> &vec)
{
     int small {0};
                     for(size_t i=0;i<vec.size();++i)
                     {
                          small=vec.at(0);
                         if(vec.at(i)<=small)
                             small=vec.at(i);
                       
                     }
                     return small;
}
double mean_number (vector <int> &vec) {
     int sum {0};
                double mean;
                 for(size_t i=0;i<vec.size();++i)
                 {
                     sum+=vec.at(i);
                 }
                 mean=static_cast<double>(sum)/vec.size();
                 return mean;
    
}
int largest_number(vector <int> &vec) {
       int big {0};
                     for(size_t i=0;i<vec.size();++i)
                     {
                          big=vec.at(0);
                         if(vec.at(i)>=big)
                             big=vec.at(i);
                       
                     }
                     return big;
}