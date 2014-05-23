#include <string>
#include <iostream>
#include <thread>
#include <stdlib.h>
#include <time.h>

using namespace std;

void task1(string msg)
{
    cout << "task1 says: " << msg << endl;
}

void randos(int iterations)
{
    double sum = 0;
    srand(time(NULL));
    for (int i = 0; i < iterations; i++) {
        sum += rand();
    }
    double average = sum/iterations;
    cout << "average: " << average << endl;
}

int main()
{
    //thread t1(task1, "sup world");
    thread t2(randos,100000);
    t2.join();
}
