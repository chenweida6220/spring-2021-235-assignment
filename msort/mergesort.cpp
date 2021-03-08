#include <iostream>
#include <vector>
using namespace std;

//Michelle Bravo
std::vector<int>merge(std::vector<int> r1, std::vector<int> r2)
{
   int a = r1.size();
   int b = r2.size();
   int i = 0;
   int j = 0;
   std::vector<int> vec;
   while(i<a && j<b)
   {
     if(r1[i] <= r2[j])
     {
       vec.push_back(r1[i]);
       i++;
     }
     else
     {
       vec.push_back(r2[j]);
       j++;
     }
   }

  while(j<b)
  {
    vec.push_back(r2[j]);
    j++;
  }
  while(i<a)
  {
    vec.push_back(r1[i]);
    i++;
  }
  return vec;
}

// Leyla Tuon Cao
vector<int> msort(std::vector<int> unsorted)
{
    if(unsorted.size()<=1)
    {
        return unsorted;
    }
    std::vector <int> left;
    std::vector <int> right;
    std::vector <int> resultleft;
    std::vector <int> resultright;
    std::vector <int> result;

    for (int i=0; i<unsorted.size()/2; i++)
    {
        left.push_back(unsorted.at(i));
    }
    resultleft=msort(left);
    for (int k= unsorted.size()/2; k<unsorted.size(); k++)
    {
        right.push_back(unsorted.at(k));
    }
    resultright = msort(right);
    return merge(resultleft, resultright);
}

int main() {
  vector<int> unsorted {38, 27, 43, 3, 9, 82, 10};
  vector<int> sorted = msort(unsorted);

  for (auto i : sorted) {
    std::cout << i << " ";
  }
}
