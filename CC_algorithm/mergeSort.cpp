#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <utility>

using namespace std;


// 归并排序, 分治排序
vector<int> sortElement(vector<int>& array);
vector<int> mergeLeftAndRight(vector<int>& subArray1, vector<int>& subArray2);

int main(int argc, char** argv)
{
    vector<int> haveSort,output;

    haveSort.push_back(4);
    haveSort.push_back(3);
    haveSort.push_back(1);
    haveSort.push_back(6);
    haveSort.push_back(4);

    if (haveSort.empty())
    {
        cout << "the sort is empty" << endl;
        return 1;
    }

    output = sortElement(haveSort);

    for ( vector<int>::iterator i = output.begin(); i != output.end() ; ++i) {
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
    cout << "mid = " << mid << endl;

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