// Узел дерева
// файл TreeNode.h
#pragma once

#include <cstddef> // Определение константы NULL

template <class TreeItemType>
class TreeNode
{
	enum { BLACK = 0, RED = 1 };
private:
	TreeItemType item;
	TreeNode<TreeItemType> * leftChildPtr, *rightChildPtr, *parentPtr;
	bool color, isEmpty;

	TreeNode() : leftChildPtr(NULL), rightChildPtr(NULL), parentPtr(NULL), color(BLACK), isEmpty(1) {};

	TreeNode(
		const TreeItemType& nodeItem,
		TreeNode<TreeItemType> * left = NULL,
		TreeNode<TreeItemType> * right = NULL,
		TreeNode<TreeItemType> * parent = NULL) :
		item(nodeItem),
		isEmpty(1),
		color(BLACK),
		leftChildPtr(left),
		rightChildPtr(right),
		parentPtr(parent)
	{};
	template <class TreeItemType> friend class BinaryTree;
};