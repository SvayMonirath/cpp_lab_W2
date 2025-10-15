Challenge 1

Time Complexity: O(1)
=> Inserting at front is generally way quicker in a linked list compared to an array, since if the array size > 0, then you need to shift elements.

Challenge 2

Time Complexity: O(n)
=> You need to always traverse to insert at the end even if you know the size.

Challenge 3

Time Complexity: O(n)
Arrows that need to change are:

The node that will be behind the new Node

The arrow of the new Node
Array is always guaranteed O(n), linked list will be O(1) if you have the pointer to where you want to insert.

Challenge 4

=> Head pointer will be moved 1 node forward, the variable pointing to the deleted node will be dangling.

Challenge 5

=> While traversing we will check 2 nodes ahead, so if compare is true to NULL, we found the last node but we are standing on the one before it (curr->next->next).

Challenge 6

The node before the removed node will point to the one after the deleted node.
If you forget to free memory after the method, the node memory space can never be used till the end of the program because you lost the reference to that node.

Challenge 7

=> The main difference is that in array you would traverse if you need to print, but with linked list the only way to access is through traversal, so it's not only for printing, it's for all behavior.

Challenge 8

=> Swapping value is easier, it's the same flow, you would just need to traverse to the 2 links you want to swap.

Challenge 9

=> Both search would require traversing and comparing, making it very similar and would take O(N).

Challenge 10

=> Linked list is faster at inserting, deleting.
=> Arrays are faster at indexing, replacing.

Reflection Prompts

Inserting at beginning if size > 0 was O(1) for linked list, O(N) for arrays.

Modifying a known index is faster with array than linked list.

If you’re not careful, you would lose reference to a memory location, making it impossible to remove afterward.

It represents the start of the linked list.

You basically lost the linked list; now depending on the size, that many memory blocks cannot be reallocated anymore.

Scenarios

Linked list

Linked list

Linked list

Array

Linked list

Array

Linked list

Array
