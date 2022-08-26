#include "binar.hpp"
#include <string>

int main()
{
	BST b;
    
    b.insert(777, type_iter::ITER);
    b.insert(3, type_iter::ITER);
    b.insert(1, type_iter::ITER);
    b.insert(2, type_iter::ITER);
    b.insert(4, type_iter::ITER);
    b.insert(9, type_iter::ITER);
    b.insert(7, type_iter::ITER);
    b.insert(8, type_iter::ITER);
    b.insert(6, type_iter::ITER);
    std::string j("tree.txt");
    b.level_order_write(j);
    b.preorder();
    b.level_order_read(j);
    BST a;
    a.level_order_read(j);
    a.preorder();  
}