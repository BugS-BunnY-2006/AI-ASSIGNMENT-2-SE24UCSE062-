# Explanation of the Program

## Problem Description – Missionaries and Cannibals

The Missionaries and Cannibals problem is a classic artificial intelligence search problem. 
There are **three missionaries and three cannibals on one side of a river**, along with a boat that can carry 
a maximum of two people.

The objective is to transfer all missionaries and cannibals to the other side of the river without ever allowing 
the cannibals to outnumber the missionaries on either side.

If cannibals outnumber missionaries, the missionaries would be eaten, which makes the state invalid.


# State Representation

Each state is represented using three variables:

* **m_left** → number of missionaries on the left bank
* **c_left** → number of cannibals on the left bank
* **boat** → boat position (1 = left side, 0 = right side)

Example starting state:

(3M, 3C, Boat Left)

Goal state:

(0M, 0C, Boat Right)

# Moves Allowed

The boat can carry **maximum two people**, so the valid moves are:

1 missionary
2 missionaries
1 cannibal
2 cannibals
1 missionary + 1 cannibal

These moves generate new states during the search.

# Search Strategies Implemented

## 1 Breadth First Search (BFS)

BFS explores nodes **level by level** using a queue data structure.

Characteristics:

* Guarantees shortest solution
* Uses large memory
* Time Complexity:
  O(b^d)

Where
b = branching factor
d = depth of solution

## 2 Depth First Search (DFS)

DFS explores **deep into the search tree first** using recursion or a stack.

Characteristics:

* Low memory usage
* May get stuck in deep paths
* Does not guarantee shortest path

## 3 Depth Limited Search (DLS)

DLS is a variation of DFS where a **depth limit** is set.

Characteristics:

* Prevents infinite recursion
* Stops exploring after certain depth
* Useful for large search spaces

## 4 Iterative Deepening DFS (IDDFS)

IDDFS repeatedly runs DFS with increasing depth limits.

Example:

Depth 0
Depth 1
Depth 2
Depth 3 ...

Characteristics:

* Combines advantages of BFS and DFS
* Uses less memory
* Guarantees optimal solution

## 5 Uniform Cost Search (UCS)

UCS expands the node with the **lowest path cost**.

In this problem, every move costs **1**, so UCS behaves similar to BFS.


# Performance Comparison

| Algorithm     | Completeness | Optimal | Memory Usage |
| ------------- | ------------ | ------- | ------------ |
| BFS           | Yes          | Yes     | High         |
| DFS           | No           | No      | Low          |
| DLS           | No           | No      | Low          |
| IDDFS         | Yes          | Yes     | Moderate     |
| UCS           | Yes          | Yes     | High         |



# Conclusion

The Missionaries and Cannibals problem demonstrates how uninformed search strategies can be applied to solve classical AI problems. 
BFS guarantees the shortest solution but requires more memory, while DFS uses less memory but may explore deeper paths unnecessarily. 
Variants such as DLS and IDDFS improve search efficiency by limiting depth and combining the advantages of BFS and DFS. 
These algorithms illustrate different approaches to exploring the state space in artificial intelligence problem solving.



