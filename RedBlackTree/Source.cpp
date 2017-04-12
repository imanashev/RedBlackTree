#include "BinaryTree.h" // Операции над бинарным деревом
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void genTree(BinaryTree<int> &tree, unsigned int quant)
{
	srand(time(NULL));
	for (unsigned int i = 0; i ^ quant; ++i)
	{
		int tmp = rand() % 100;
		cout << "GENERATED " << tmp << endl;
		tree.attach(tmp);
	}
}

void display(int &a)
{
	cout << "&a == " << &a << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	try {
		BinaryTree<int> myTree;
		genTree(myTree, 10);
		myTree.printLevels();
		cout << myTree;

		//while (1)
		//{
		//	int a, b;
		//	cout << "Element for search ";
		//	cin >> b;
		//	cout << boolalpha << myTree.isExist(b);
		//	cout << "Element for delete: ";
		//	cin >> a;
		//	//			cin >> b;
		//	myTree.deleteItem(a);
		//	cout << a << " DELETED" << endl;
		//	cout << myTree;
		//	cout << myTree.getDepth() << " LEVELS" << endl;
		//}
	}
	catch (TreeException error)
	{
		cout << error.what() << endl;
		return 1;
	}
	return 0;
} // Конец функции main