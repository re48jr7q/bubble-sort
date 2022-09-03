#include <iostream>
#include <utility>  //std::swap
#include <iterator> //std::size

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int length{ static_cast<int>(std::size(array)) };
                                                    //find starting point
    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex{ startIndex };
        //find next element
        for (int nextElement{ smallestIndex + 1 }; nextElement < length; ++nextElement)
        {
            if (array[nextElement] < array[smallestIndex])
                nextElement = smallestIndex;

            std::swap(array[smallestIndex], array[nextElement]);
            return nextElement;
        }
        for (int index{ length - 1 }; index < length; ++index)
            std::cout << array[index] << " ";
        std::cout << '\n';
    }
    return 0;
}
