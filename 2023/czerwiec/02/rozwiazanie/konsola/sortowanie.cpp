#include <iostream>
#include <cstdlib>
#include <ctime>

const int nums_count = 100;

void fill(int* arr, int max = 100)
{
    srand(time(NULL));
    for (int i = 0; i < nums_count; ++i)
    {
        arr[i] = rand() % (max + 1);
    }
}
void sort(int* arr)
{
    bool flag;
    int buff;

    for (int i = 0; i < nums_count; ++i)
    {
        flag = false;
        for (int j = 0; j < nums_count - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                buff = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = buff;
            }
        }
    }
}
void print(int* nums)
{
    std::cout << "Wynik sortowania bąbelkowego:\n";
    std::cout << nums[0];
    for (int i = 1; i < nums_count; i++)
    {
        std::cout << ", " << nums[i];
    }
    std::cout << std::endl;
}

int main()
{
    int nums[nums_count];

    fill(nums, 100);
    sort(nums);
    print(nums);

    return 0;
}