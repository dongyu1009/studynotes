#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#define SIZE 6

using namespace std;


int main(void){
    int array[SIZE] = {2,4,5,6,7,8};

    vector<int> v(array, array + SIZE);

    cout << "first : " << v.front() << " back : " << v.back() << endl;
    
    // v[1] = 100;
    // v.at(2) = 10;

    cout << "second : " <<  v[1] << endl;
    
    int sum = accumulate(begin(v), end(v), 0);

    double mean = (double)sum / v.size();
    cout << "mean : " << mean << endl;
    double accum = .0;
    for_each(begin(v), end(v), [&](int value)
    {
        accum += (value - mean) * (value - mean);
    });

    double stdp = sqrt(accum / v.size()); // Population Standard Deviation σ
    double stds = sqrt(accum / (v.size() - 1)); // Sample Standard Deviation s

    cout << "sample std (s): " << stds << endl << "population std (σ): " << stdp << endl;

    vector<int> v1(1);

    return 0;
}
