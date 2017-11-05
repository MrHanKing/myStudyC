//
// Created by HanJun on 2017/11/05.
//


// 归并排序, 分治排序
#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <ctime>
#include <random>

using namespace std;

vector<int> sortElement(vector<int>& array);
vector<int> mergeLeftAndRight(vector<int>& subArray1, vector<int>& subArray2);
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
        cout << *i << endl;
    }
    return 0;
}

vector<int> sortElement(vector<int>& array)
{
    vector<int> leftElement,rightElement,subOutput;
    vector<int>::size_type mid;

    if (array.size() <= 1)
    {
        return array;
    }
    mid = array.size() / 2;
//    cout << "mid = " << mid << endl;

    leftElement.assign(array.begin(), array.begin() + mid);
    rightElement.assign(array.begin() + mid, array.end());

    leftElement = sortElement(leftElement);
    rightElement = sortElement(rightElement);

    //归整左右2边
    subOutput = mergeLeftAndRight(leftElement, rightElement);

    return subOutput;
}

vector<int> mergeLeftAndRight(vector<int>& subArray1, vector<int>& subArray2)
{
    vector<int> mergeLeftAndRight;
    // subArray1 和 subArray2 的进行迭代器
    vector<int>::iterator subiter1,subiter2;

    //compare element and sort element to mergeLeftAndRight;
    for (subiter1 = subArray1.begin(),subiter2 = subArray2.begin();
         subiter1 != subArray1.end() and subiter2 != subArray2.end(); )
    {
        if ((*subiter1) < (*subiter2)){
            mergeLeftAndRight.push_back(*subiter1);
            ++subiter1;
        } else {
            mergeLeftAndRight.push_back(*subiter2);
            ++subiter2;
        }
    }

    // copy remain element to mergeLeftAndRight, that need not sort.
    if (subiter1 == subArray1.end())
    {
        mergeLeftAndRight.insert(mergeLeftAndRight.end(),subiter2,subArray2.end());
    } else {
        mergeLeftAndRight.insert(mergeLeftAndRight.end(),subiter1,subArray1.end());
    }

    return mergeLeftAndRight;
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

    return vec;
}