#include <iostream>
#include <vector>
using namespace std;
int main()
{
    char choice {};
     vector <int> vec{1,2,3};
    do {
   
	cout << "Welcome to Jason's Menu\n" ;
    cout << "The default number collection is {1,2,3}, the further operations can be done with the help of the given menu";
    cout << "Choose any of the following options:\n" ;
    cout << " P: Print numbers\n A:Add numbers to the collection \n M:Find mean of the numbers\n S:Find the smallest \n L:Find the largest\n Q:Quit\n" ;
    
    cin >> choice;
    if (choice=='p'||choice=='P') {
        if(vec.size()==0)
            cout << "The list is empty";
            else {
                 cout<<"THe numbers are [ " ;
        for(auto val:vec)
           cout << val << " ";
           cout << "]" << endl;
            }
        
    }
    
            
        else if(choice=='a'||choice=='A') {
            int num{};
            cout << "Enter the numbers to be added to the collection" << endl;
            cin >> num;
            vec.push_back(num);
        }
            else if(choice=='m'||choice=='M')
            {
                int sum {0};
                double mean;
                 for(size_t i=0;i<vec.size();++i)
                 {
                     sum+=vec.at(i);
                 }
                 mean=static_cast<double>(sum)/vec.size();
                 cout << "The mean of the numbers is " << mean << endl;
                 }
                     
                else if(choice=='s'||choice=='S') {
                    int small {0};
                     for(size_t i=0;i<vec.size();++i)
                     {
                          small=vec.at(0);
                         if(vec.at(i)<=small)
                             small=vec.at(i);
                       
                     }
                     cout << "The smallest numbers is " << small << endl;
                }
                             
                    else if(choice=='l'||choice=='L') {
                        int big {0};
                     for(size_t i=0;i<vec.size();++i)
                     {
                          big=vec.at(0);
                         if(vec.at(i)>=big)
                             big=vec.at(i);
                       
                     }
                     cout << "The largest number is " << big << endl;
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
