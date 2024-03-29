class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = new_node

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

    def search(self, target):
        current = self.head
        while current:
            if current.data == target:
                return True
            current = current.next
        return False

    def delete(self, target):
        if not self.head:
            return
        if self.head.data == target:
            self.head = self.head.next
            return
        current = self.head
        while current.next:
            if current.next.data == target:
                current.next = current.next.next
                return

# Example usage:
my_list = LinkedList()
my_list.append(1)
my_list.append(2)
my_list.append(3)

my_list.display()  # Output: 1 -> 2 -> 3 -> None

if my_list.search(2):
    print("Found")
else:
    print("Not found")  # Output: Found

my_list.delete(2)
my_list.display()  # Output: 1 -> 3 -> None
