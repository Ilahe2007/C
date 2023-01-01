#include <iostream>
#include <set>
using namespace std;
int main()
{
 multiset<int>mst; //multiset t?yin edilir.
 mst.insert(5); // st[] = {5}
 mst.insert(2); // st[] = {2, 5}
 mst.insert(4); // st[] = {2, 4, 5}
 mst.insert(4); // st[] = {2, 4, 4, 5}
 mst.insert(1); // st[] = {1, 2, 4, 4, 5}
 mst.insert(2); // st[] = {1, 2, 2, 4, 4, 5}
 cout<<mst.size()<<endl; // �ixisda 6 verilir.
 
 mst.erase(4); // st[] = {1, 2, 2, 5}
 cout<<mst.count(2)<<endl; // �ixisda 2-l?rin sayi verilir.
 auto i = mst.find(2); // 2-nin adresi axtarilir.
 mst.erase(i); //2-nin adresi silinir. st[] = {1, 2, 5}
 for(auto i = mst.begin(); i != mst.end(); i++){
 cout<<*i<<" "; // �ixisda 1 2 5 verilir.
 }
 mst.clear();
 } //multisetd?n b�t�n elementl?r silinir.
