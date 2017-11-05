//
// Created by HanJun on 2017/11/05.
//


#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <ctime>
#include <random>

using namespace std;

// 插入排序
vector<int> sortElement(vector<int>& array);
//创建随机数
vector<int> createAndShowVector(int num);

int main(int argc, char** argv)
{
    vector<int> haveSort,output;

    haveSort = createAndShowVector(10);

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
    int temp;
    vector<int>::size_type size = array.size();

    if (array.size() <= 1)
    {
        return array;
    }

    for (int i = 1; i < size; ++i) {
        temp = array[i];
        int j = i;
        while (j - 1 >= 0 && array[j - 1] > temp)
        {
            array[j] = array[j - 1];
            --j;
        }
        array[j] = temp;
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