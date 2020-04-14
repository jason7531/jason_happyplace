#include <iostream>
using namespace std;
void print_array(size_t size,const int* const array);
int *apply_all(int* array_1,size_t size_1,int* array_2,size_t size_2);
int main()
{
	cout << "Enter the size of array_1: ";
   size_t size_1;
    cin >> size_1;
    int array_1 [size_1] {};
    cout << "Enter the elements to be entered\n";
    for(size_t i=0;i<size_1;i++) 
        cin >> array_1[i];
        print_array(size_1,array_1);
        cout << "Enter the size of array_2: ";
   size_t size_2;
    cin >> size_2;
    int array_2 [size_2] {};
    cout << "Enter the elements to be entered\n";
    for(size_t i=0;i<size_2;i++) 
        cin >> array_2[i];
        print_array(size_2,array_2);
        int *result=apply_all(array_1,size_1,array_2,size_2);
        size_t size_3=size_1*size_2;
        cout << "The result is " << endl;
        print_array(size_3,result);
        delete [] result;
    
    
	return 0;
}
void print_array(size_t size,const int* const array) {
    cout << "[";
    for(size_t i=0;i<size;i++) {
        cout << array[i] << " ";
    }
    cout << "]";
}
int* apply_all(int* array_1,size_t size_1,int* array_2,size_t size_2) {
    int *array_3{};
    size_t size_3=size_2*size_1;
    array_3= new int[size_3];
    size_t k{0};
for(size_t i=0;i<size_1;i++) {
    for(size_t j=0;j<size_2;j++) {
        
        array_3[k]=array_1[i]*array_2[j];
        k++;
    }
}
return array_3;
}
