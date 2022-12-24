class HashTable {
  constructor() {
    this.table = {};
  }

  // Hash function to generate a hash code for a given key
  hash(key) {
    let hash = 0;
    for (let i = 0; i < key.length; i++) {
      hash += key.charCodeAt(i);
    }
    return hash % 37; // per que s'o?
  }

  // Method to add a key-value pair to the hash table
  put(key, value) {
    const hash = this.hash(key);
    this.table[hash] = value;
  }

  // Method to retrieve the value for a given key from the hash table
  get(key) {
    const hash = this.hash(key);
    return this.table[hash];
  }

  // Method to remove a key-value pair from the hash table
  remove(key) {
    const hash = this.hash(key);
    delete this.table[hash];
  }
}

// Example usage
const hashTable = new HashTable();
hashTable.put('key1', 'value1');
hashTable.put('key2', 'value2');
console.log(hashTable.get('key1')); // Outputs 'value1'
hashTable.remove('key1');
console.log(hashTable.get('key1')); // Outputs undefined