# Binary Trees

This project implements **binary tree data structures** and associated operations in the C programming language.  
It focuses on core concepts such as recursion, tree traversal, depth, height, balance, and memory management.

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Data Structures](#data-structures)
- [Requirements](#requirements)
- [Author](#author)

---

## Overview

This project explores binary trees (not Binary Search Trees by default), including:

- Creation of nodes
- Tree traversal (pre-order, in-order, post-order)
- Measuring size, depth, height, balance
- Counting leaves and internal nodes
- Checking if a tree is full or perfect
- Finding siblings and uncles

---

## Features

| Task | Function | Description |
|------|----------|-------------|
| 0    | `binary_tree_node` | Creates a new binary tree node |
| 1    | `binary_tree_insert_left` | Inserts a node as the left-child |
| 2    | `binary_tree_insert_right` | Inserts a node as the right-child |
| 3    | `binary_tree_delete` | Deletes an entire binary tree |
| 4    | `binary_tree_is_leaf` | Checks if a node is a leaf |
| 5    | `binary_tree_is_root` | Checks if a node is a root |
| 6    | `binary_tree_preorder` | Traverses a tree in pre-order |
| 7    | `binary_tree_inorder` | Traverses a tree in in-order |
| 8    | `binary_tree_postorder` | Traverses a tree in post-order |
| 9    | `binary_tree_height` | Measures the height of a tree |
| 10   | `binary_tree_depth` | Measures the depth of a node |
| 11   | `binary_tree_size` | Measures the size of a tree |
| 12   | `binary_tree_leaves` | Counts the leaves |
| 13   | `binary_tree_nodes` | Counts internal nodes (with at least one child) |
| 14   | `binary_tree_balance` | Measures the balance factor |
| 15   | `binary_tree_is_full` | Checks if a tree is full |
| 16   | `binary_tree_is_perfect` | Checks if a tree is perfect |
| 17   | `binary_tree_sibling` | Finds the sibling of a node |
| 18   | `binary_tree_uncle` | Finds the uncle of a node |

---

## Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;   /* Binary Search Tree */
typedef struct binary_tree_s avl_t;   /* AVL Tree */
typedef struct binary_tree_s heap_t;  /* Max Binary Heap */
```

---

## Requirements

OS: Ubuntu 20.04 LTS

Compiler: gcc with flags:

```bash
-Wall -Wextra -Werror -pedantic -std=gnu89
```
Allowed editors: vi, vim, emacs

All your files should end with a new line

A README.md file, at the root of the folder of the project, is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

You are allowed to use the standard library

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called binary_trees.h

All your header files should be include guarded


---

## Author
- [@Yugz29](https://github.com/Yugz29)
- [@joevinM](https://www.github.com/joevinM)