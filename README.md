# cpp_lab_W2

# challenge 1
# Time Complexity: O(1)
# => inserting at front is generally way quicky linked list compared to array since if the array size > 0 then u need to shift elements.

# challenge 2
# Time Complexity: O(n)
# => You need to always traverse to insert at the end even if you know the size

# challenge 3
# Time Complexity: O(n)
# arrows that need to change are:
# - The node that will be behind the new Node
# - The arrow of the new Node
# array is always guranteed O(n), linkedlist will be O(1) if you have the pointer to where u want to insert

# challenge 4
# => head pointer will be move 1 node forward, the variable pointing to the deleted node will be dangling

# challenge 5
# => while traversing we will check 2 node ahead so if compare is true to NULL, we found the last node but we are standing on the one before it (curr->next->next)

# challenge 6
# the node before the removed node will point to the one after the deleted node.
# if you forget to free memory after the method the node memory space can never be use till the end of the program because you lost the reference to that node

# challenge 7
# => the main difference is that arr you would traverse if you need to print , but with linked list the only way to access is throught traverse so its not only for printing its for all behavior

# challenge 8
# => swapping value is easier, its the same flow just you would need to traverse to the 2 links you wanna swap

# challenge 9
# => both search would require traversing and comparing making it very similar and would take O(N)

# challenge 10
# => Linked list is faster at inserting, deleting
# => Arrays are faster at indexing, replacing


# Reflection Prompts
# 1. inserting at beginning if Size > 0 was O(1) for linked list O(N) for arrays
# 2. modifying a known index is faster with array than linked list
# 3. If your not careful you would lose reference to a memory location making it impossible to remove after ward
# 4. its represent the start of the linked list
# 5. you basically lost the linked list now depending on the size is how much memory block u cant reallocate anymore

# Scenarios
# 1. linked list
# 2. linked list
# 3. linked list
# 4. array
# 5. linked list
# 6. array
# 7. linked list
# 8. array
