#include <iostream>

int searchArray(int array[], int size, int element);

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums)/sizeof(int);
    int index = 0;
    int myNum = 0;

    std::cout << "Enter element to search for: " << std::endl;
    std::cin >> myNum;

    index = searchArray(nums, size, myNum);

    if(index != -1) {
        std::cout << myNum << " is at index " << index;
    }
    else {
        std::cout << myNum << "is not in the array";
    }


    //lets do the same for food
    std::string





    return 0;
}

int searchArray(int array[], int size, int element) {

    for(int i = 0; i < size; i++) {
        if(array[i] == element) {
            return i;
        }
    }
    return -1; //-1 sentinel value that means something wasnt found


}