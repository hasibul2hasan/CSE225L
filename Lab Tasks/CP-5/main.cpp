#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> bst;

    if (bst.IsEmpty())
    {
        cout << "Tree is empty" << endl;
    }
    else
    {
        cout << "Tree is not empty" << endl;
    }


    bst.InsertItem(4);
    bst.InsertItem(9);
    bst.InsertItem(2);
    bst.InsertItem(7);
    bst.InsertItem(3);
    bst.InsertItem(11);
    bst.InsertItem(17);
    bst.InsertItem(0);
    bst.InsertItem(5);
    bst.InsertItem(1);

    if (bst.IsEmpty())
    {
        cout << "Tree is empty" << endl;
    }
    else
    {
        cout << "Tree is not empty" << endl;
    }


    cout << "Length of tree: " << bst.LengthIs() << endl;

    if (bst.RetrieveItem(9))
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    if (bst.RetrieveItem(13))
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    cout << "Elements in tree (inorder): ";
    bst.Print([](int value)
    {
        cout << value << " ";
    });
    cout << endl;

    // Print the elements in the tree (preorder)
    cout << "Elements in tree (preorder): ";
    bst.Print([](int value)
    {
        cout << value << " ";
    });
    cout << endl;


    bst.MakeEmpty();

    return 0;
}

return 0;
}
