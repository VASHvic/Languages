class Node {
  constructor(value, prev = null, next = null) {
    this.value = value;
    this.prev = prev;
    this.next = next;
  }
}
class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.prev = null; // el prev nom;es fa falta si vols fer un metodo per a tornar arrere;
  }

  append(value) {
    const newNode = new Node(value);

    if (!this.head) {
      this.head = newNode;
    } else {
      this.tail.next = newNode;
      this.prev = this.tail;
    }
    this.tail = newNode;
  }

  traverse(callback) {
    let currentNode = this.head;
    while (currentNode !== null) {
      callback(currentNode);
      currentNode = currentNode.next;
    }
  }


}

const printNode = (node) => console.log(node.value);

const list = new LinkedList();
list.append(1);
list.append(2);
list.traverse(printNode);