//
// Created by admin on 2017/11/5.
//

#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <ctime>
#include <random>

using namespace std;

// 冒泡排序
vector<int> sortElement(vector<int>& array);
vector<int> createAndShowVector(int num);

int main(int argc, char** argv)
{
    vector<int> haveSort,output;

    haveSort = createAndShowVector(5);

    if (haveSort.empty())
    {
        cout << "the sort is empty" << endl;
        return 1;
    }

    output = sortElement(haveSort);

    for ( auto i = output.begin(); i != output.end() ; ++i) {
        cout << *i << " ";
    }
    return 0;
}

vector<int> sortElement(vector<int>& array)
{
    int temp,countNum;
    vector<int>::size_type size = array.size();

    if (array.size() <= 1)
    {
        return array;
    }

    for (int i = 0; i < size; ++i) {
        countNum = 0;
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                ++countNum;
            }
        }
        //如果序列不变了 提早结束冒泡
        if (countNum == 0){
            break;
        }
    }

    return array;
}

vector<int> createAndShowVector(int num)
{
    vector<int> vec;
    int x;
//    srand((unsigned)time(NULL));
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,100);
    for (int i = 0; i < num; ++i) {
        x = distribution(generator);
        vec.push_back(x);
    }

    // show random vec
    cout << "生成的随机数组：" << endl;
    int i = 0;
    for (auto iter = vec.begin(); iter != vec.end() ; ++iter) {
        cout << *iter << " ";
        ++i;
        if (i % 10 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    return vec;
}