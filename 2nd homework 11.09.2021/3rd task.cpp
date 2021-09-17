#include <iostream>
#include <vector>


int Binary_Search(std::vector<int> array, int key) {
    int midd = 0;
    int left = 0;
    int right = array.size();
    while (1) {
        midd = (left + right) / 2;

        if (key < array[midd]) {
            right = midd - 1;
        }
        else if (key > array[midd]) {
            left = midd + 1;
        }
        else {
            return 1;           // if key in array
        }
        if (left > right)          // key does not exist 
            return 0;
    }
}


int main()
{   
    const std::vector<int> array = { 1, 2, 3, 5, 7, 8, 10, 13, 15, 18 };
    int key;

    std::cout << "Array:\n";
    for (int i = 0; i < array.size(); i++)
        std::cout << array[i] << ' ';
    std::cout << "\nEnter a key for searching:\n";
    std::cin >> key;

    if (Binary_Search(array, key)) {
        std::cout << "Key in array";
    }
    else {
        std::cout << "Key not in array";
    }
    
    return 0;
}